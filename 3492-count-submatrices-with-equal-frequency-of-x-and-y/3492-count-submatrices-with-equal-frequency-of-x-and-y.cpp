class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<pair<int,int>>>mat(n, vector<pair<int,int>>(m, {0,0}));
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(j > 0){
                    mat[i][j] ={ mat[i][j-1].first + (grid[i][j]=='X' ? 1 : 0) , mat[i][j-1].second + (grid[i][j]=='Y' ? 1 : 0)};
                }
                else{
                    mat[i][j] = {(grid[i][j]=='X' ? 1 : 0), (grid[i][j]=='Y' ? 1 : 0)};
                }
            }
        }

        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(i > 0){
                    mat[i][j].first += mat[i-1][j].first;
                    mat[i][j].second += mat[i-1][j].second;
                }
                
                if(mat[i][j].first > 0 && mat[i][j].first == mat[i][j].second) count++;
            }
        }

        return count;
    }
};