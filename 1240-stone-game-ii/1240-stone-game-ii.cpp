class Solution {
public:
    int fun(int idx, int M, bool isAlice, vector<int>&piles, vector<vector<int>>&dp){
        if(idx == piles.size()) return 0;

        if(dp[idx][M] != -1) return dp[idx][M];
        int ans = INT_MIN;
        int curr = 0;
        for(int i=idx; i<idx+2*M && i<piles.size(); i++){
            curr += piles[i];
            ans = max(ans, curr - fun(i+1, max(i-idx+1, M), !isAlice, piles, dp));
        }

        return dp[idx][M] = ans;
    }
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>>dp(n+1, vector<int>(201,-1));
        int totalSum = accumulate(piles.begin(), piles.end(), 0);
        int diff = fun(0, 1, 0, piles, dp);
        return (totalSum + diff)/2;
    }
};