class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_map<int, vector<int>>mp;
        for(int i=0; i<m; i++){
            int mn = INT_MAX;
            int col;
            for(int j=0; j<n; j++){
                if(matrix[i][j] < mn){
                    mn = matrix[i][j];
                    col = j;
                }
            }
            mp[col].push_back(i);
        }
        vector<int>ans;
        for(int j=0; j<n; j++){
            int mx = INT_MIN;
            int row;
            if(mp.find(j) == mp.end()) continue;
            for(int i=0; i<m; i++){
                 if(matrix[i][j] > mx){
                    mx = matrix[i][j];
                    row = i;
                }
            }
            for(int u:mp[j]){
                if(u == row){
                    ans.push_back(matrix[row][j]);
                    break;
                }
            }
        }

        return ans;
    }
};