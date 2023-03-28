#include <bits/stdc++.h>
 
using namespace std;
int pathcost=INT_MAX;
    void checkpath(vector<vector<int>>& grid, int row, int col,int sum){
        if(row == grid.size()-1 && col == grid[0].size()-1){
            sum+=grid[row][col];
            pathcost=min(pathcost, sum);
            return;
        }
        sum+=grid[row][col];
        if(row < grid.size()){
            checkpath(grid, row+1, col, sum);
        }
        if(col<grid[0].size()){
            checkpath(grid,row,col+1,sum);
        }
    }
   int minPathSum(vector<vector<int>>& grid) {
        checkpath(grid,0,0,0);
        return pathcost;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}