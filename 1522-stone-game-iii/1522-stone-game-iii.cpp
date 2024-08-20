class Solution {
public:
    int fun(int idx, vector<int>& stoneValue, vector<int>&dp){
        if(idx >= stoneValue.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        int ans = INT_MIN;
        int curr = 0;
        for(int i=idx; i<stoneValue.size() && i<idx+3; i++){
            curr += stoneValue[i];
            ans = max(ans, curr - fun(i+1, stoneValue, dp));
        }

        return dp[idx] = ans;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int>dp(n+1, -1);
        int totalSum = accumulate(stoneValue.begin(), stoneValue.end(), 0);
        int diff = fun(0, stoneValue, dp);

        int alice = (totalSum + diff)/2;
        int bob = (totalSum - alice);
        if(alice == bob) return "Tie";
        return (alice > bob) ?  "Alice" : "Bob";
    }
};