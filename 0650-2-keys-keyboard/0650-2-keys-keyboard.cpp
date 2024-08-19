#define ll long long 
class Solution {
public:
    int dp[1001][1001];
    ll fun(int curr, int copiedLast, int n){
        if(curr == n) return 0;

        if(dp[curr][copiedLast] != -1) return dp[curr][copiedLast];
        ll ans = INT_MAX;
        if(copiedLast > 0 && curr + copiedLast <= n){
            ans = min(ans, 1+fun(curr+copiedLast, copiedLast, n));
        }
        if(curr + curr <= n && curr != copiedLast){
            ans = min(ans, 1+fun(curr, curr, n));
        }

        return dp[curr][copiedLast] = ans;
    }
    int minSteps(int n) {
        // vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        memset(dp, -1, sizeof(dp));
        int ans = fun(1, 0, n);
        return ans;
    }
};