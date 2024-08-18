class Solution {
public:
    // long long fun(int i, int j, vector<vector<int>>& points, vector<vector<long long>>& dp){
    //     if(i == 0) return points[i][j];

    //     if(dp[i][j] != -1) return dp[i][j];
    //     int n = points[0].size();
    //     long long maxi = 0;
    //     for(int k=0; k<n; k++){
    //         maxi = max(maxi, points[i][j] + fun(i-1, k, points, dp) - abs(j-k));
    //     }

    //     return dp[i][j] = maxi;
    // }

    long long maxPoints(vector<vector<int>>& points) {
        int m = points.size(), n = points[0].size();
        vector<vector<long long>>dp(m, vector<long long>(n,0));
        long long maxi = 0;
        for(int j=0; j<n;  j++){
            dp[0][j] = points[0][j];
            maxi = max(maxi, dp[0][j]);
        }

        for(int i=1; i<m; i++){
            map<long long,int, greater<int>>mp;
            for(int j=0; j<n; j++){
                mp[dp[i-1][j]-j]++;
            }
            for(int j=0; j<n; j++){
                dp[i][j] = points[i][j] + j + mp.begin()->first;
                maxi = max(maxi, dp[i][j]);
                mp[dp[i-1][j] -j]--;
                if(mp[dp[i-1][j] -j] == 0){
                    mp.erase(dp[i-1][j] -j);
                }
            }
            mp.clear();
            for(int j=0; j<n; j++){
                mp[dp[i-1][j]+j]++;
            }
            for(int j=n-1; j>=0; j--){
                dp[i][j] = max(dp[i][j], points[i][j] - j + mp.begin()->first);
                maxi = max(maxi, dp[i][j]);
                mp[dp[i-1][j] + j]--;
                if(mp[dp[i-1][j] + j] == 0){
                    mp.erase(dp[i-1][j] + j);
                }
            }
        }


        return maxi;
    }
};