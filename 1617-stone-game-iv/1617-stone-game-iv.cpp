class Solution {
public:
    bool fun(int n, vector<int>&dp){
        if(n <= 0) return false;
        if(dp[n] != -1) return dp[n];
        bool ans = false;
        for(int i=1; i*i <= n; i++){
            ans = ans || !(fun(n-i*i, dp));
        }

        return dp[n] = ans;
    }
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1);
        return fun(n, dp);
    }
};
