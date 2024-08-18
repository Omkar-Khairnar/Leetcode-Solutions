class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m = points.size(), n = points[0].size();
        vector<long long>prev(n,0);
        vector<long long>curr(n,0);
        long long maxi = 0;
        for(int j=0; j<n;  j++){
            prev[j] = points[0][j];
            maxi = max(maxi, prev[j]);
        }

        for(int i=1; i<m; i++){
            long long mxVal = prev[0];

            for(int j=0; j<n; j++){
                mxVal = max(mxVal, prev[j]+j);
                curr[j] = mxVal + points[i][j] - j;
            }
            mxVal = prev[n-1]-(n-1);
            for(int j=n-1; j>=0; j--){
                mxVal = max(mxVal, prev[j]-j);
                curr[j] = max(curr[j], mxVal + points[i][j] + j);
            }
            prev = curr;
        }

        for(int j=0; j<n; j++){
            maxi = max(maxi, curr[j]);
        }


        return maxi;
    }
};