#define ll long long 
class Solution {
public:
    ll fun(int curr, int copiedLast, int n, vector<vector<int>>&dp){
        if(curr == n) return 0;

        if(dp[curr][copiedLast] != -1) return dp[curr][copiedLast];
        ll ans = INT_MAX;
        if(copiedLast > 0 && curr + copiedLast <= n){
            ans = min(ans, 1+fun(curr+copiedLast, copiedLast, n, dp));
        }
        if(curr + curr <= n && curr != copiedLast){
            ans = min(ans, 1+fun(curr, curr, n, dp));
        }

        return dp[curr][copiedLast] = ans;
    }
    int minSteps(int n) {
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        int ans = fun(1, 0, n, dp);
        return ans;
    }
};