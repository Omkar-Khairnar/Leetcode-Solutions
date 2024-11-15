class Solution {
public:
    int fun(int i, int j, int m, vector<vector<int>>& dp, vector<vector<int>>& grid){
        int ans = 0;
        if(i-1 >= 0 && grid[i][j] < grid[i-1][j+1]){
            ans = max(ans, 1 + dp[i-1][j+1]);
        }
        if(i+1 < m && grid[i][j] < grid[i+1][j+1]){
            ans = max(ans, 1 + dp[i+1][j+1]);
        }
        if(grid[i][j] < grid[i][j+1]){
            ans = max(ans, 1 + dp[i][j+1]);
        }
        return dp[i][j] = ans;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>dp(m, vector<int>(n,0));

        int ans = 0;
        for(int j = n-2; j>=0; j--){
            for(int i=0; i<m; i++){
                int curr = fun(i, j, m, dp, grid);
                if(j == 0) ans = max(ans, curr);
            }
        }


        return ans;
    }
};