class Solution {
public:
    bool isMagicSquare(int x, int y, vector<vector<int>>&rowPrefixMat, vector<vector<int>>&colPrefixMat, vector<vector<int>>& grid){
        vector<int>vis(10,0);
        for(int i=x; i<x+3; i++){
            for(int j=y; j<y+3; j++){
                if(grid[i][j]>9 || grid[i][j]==0 || vis[grid[i][j]]) return false;
                vis[grid[i][j]] = 1;
            }
        }
        int sum = rowPrefixMat[x][y+2] - (y-1>=0 ? rowPrefixMat[x][y-1] : 0);
        int temp = 0;

        for(int j=y; j<y+3; j++){
            if(sum != (colPrefixMat[x+2][j] - (x-1>=0 ? colPrefixMat[x-1][j] : 0))) return false;
        }
        for(int i=x; i<x+3; i++){
            if(sum != (rowPrefixMat[i][y+2] - (y-1>=0 ? rowPrefixMat[i][y-1] : 0))) return false;
        }

        for(int i=x, j=y; i<x+3 && j<y+3; i++, j++){
            temp += grid[i][j];
        }
        if(temp != sum) return false;
        temp = 0;
        for(int i=x, j=y+2; i<x+3 && j>=y; i++,j--){
            temp += grid[i][j];
        }
        if(temp != sum) return false;

        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ct = 0;
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>>rowPrefixMat(m, vector<int>(n,0));
        vector<vector<int>>colPrefixMat(m, vector<int>(n,0));
        for(int i=0; i<m; i++){
            rowPrefixMat[i][0] = grid[i][0];
        }
        for(int i=0; i<n; i++){
            colPrefixMat[0][i] = grid[0][i];
        }

        for(int i=0; i<m; i++){
            for(int j=1; j<n; j++){
                rowPrefixMat[i][j] = rowPrefixMat[i][j-1] + grid[i][j];
            }
        }

        for(int j=0; j<n; j++){
            for(int i=1; i<m; i++){
                colPrefixMat[i][j] = colPrefixMat[i-1][j] + grid[i][j];
            }
        }


        for(int i=0; i<m-2; i++){
            for(int j=0; j<n-2; j++){
                if(isMagicSquare(i, j, rowPrefixMat, colPrefixMat, grid)) ct++;
            }
        }

        return ct;
    }
};