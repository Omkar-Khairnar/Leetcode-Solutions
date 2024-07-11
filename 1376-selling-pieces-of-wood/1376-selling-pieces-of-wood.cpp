class Solution {
public:
    long long fun(int m, int n, unordered_map<string, int>&mp, vector<vector<long long>>&dp){
        string s = to_string(m)+'|'+to_string(n);
        if(m == 1 && n == 1){
            return mp[s];
        }
        if(dp[m][n] != -1) return dp[m][n];
        long long ans = mp[s];

        for(int i=1; i<=(m/2); i++){
            ans = max(ans, fun(m-i, n, mp, dp) + fun(i, n, mp, dp));
        }

        for(int j=1; j<=(n/2); j++){
            ans = max(ans, fun(m, n-j, mp, dp)+fun(m, j, mp, dp));
        }

       
        // cout<<m<<" "<<n<<" "<<ans<<endl;
        return dp[m][n] = ans;
    }
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        unordered_map<string, int>mp;

        for(auto vec : prices){
            mp[to_string(vec[0])+'|'+to_string(vec[1])] = vec[2];
        }
        vector<vector<long long>>dp(m+1, vector<long long>(n+1,-1));
        return fun(m, n, mp, dp);
    }
};