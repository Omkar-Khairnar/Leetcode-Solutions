class Solution {
public:
    int fun(int i, int j, string &src, string &pat, unordered_map<int, int>&mp, vector<vector<int>>&dp){
        //base CAse
        if(i == src.size()){
            if(j == pat.size()) return 0;
            return -10000;
        }

        if(dp[i][j] != -1) return dp[i][j];
        int ans = INT_MIN;
        if(src[i] != pat[j]){
            if(mp[i] > 0) ans = 1 + fun(i+1, j, src, pat, mp, dp);
            else ans = fun(i+1, j, src, pat, mp, dp);
        }
        else{
            int remove = INT_MIN;
            int keep = INT_MIN;
            if(mp[i] > 0){
                remove = 1 + fun(i+1, j, src, pat, mp, dp);
            }
            keep = fun(i+1, j+1, src, pat, mp, dp);

            ans =max(ans, max(keep, remove));
        }
        // cout<<i<<" "<<j<<" "<<ans<<endl;

        return dp[i][j] = ans;
    }
    int maxRemovals(string source, string pattern, vector<int>& val) {
        
        int n = source.size();
        int m = pattern.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));

        unordered_map<int, int>mp;
        for(int u : val){
            mp[u]++;
        }


        return fun(0, 0, source, pattern, mp, dp);
    }
};