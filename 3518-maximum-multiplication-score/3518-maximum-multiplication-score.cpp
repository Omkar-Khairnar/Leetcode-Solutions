#define ll long long
class Solution {
public:
    ll fun(int idx, int k, vector<int>&a, vector<int>&b, vector<vector<ll>>&dp){
        //base Case
        if(k == 4) return 0;
        if(idx == b.size()){
            return INT_MIN;
        }
        if(dp[idx][k] != -1) return dp[idx][k];

        ll ans = INT_MIN;
        ll notTake = fun(idx+1, k, a, b, dp);
        ll take = (ll)a[k] * b[idx] + fun(idx+1, k+1, a, b, dp);

        return dp[idx][k] = max(take, notTake);
    }
    long long maxScore(vector<int>& a, vector<int>& b) {
        int n = b.size();
        vector<vector<ll>>dp(n+1, vector<ll>(5,-1));
        return fun(0, 0, a, b, dp);
    }
};