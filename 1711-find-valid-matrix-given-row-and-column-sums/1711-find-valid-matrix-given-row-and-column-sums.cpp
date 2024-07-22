class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size(), n = colSum.size();

        vector<vector<int>>vec(m, vector<int>(n,0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                vec[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= vec[i][j];
                colSum[j] -= vec[i][j];
            }
        }

        return vec;
    }
};