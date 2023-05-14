#include <bits/stdc++.h>
 
using namespace std;
  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        int dp[100][100]={0};
        cout<<dp[r-1][c-1];
        for(int i=0; i<r; i++){
            if(!obstacleGrid[i][0]){
                dp[i][0]=1;
            }
            else break;
        }
        for(int j=0; j<c; j++){
            if(!obstacleGrid[0][j]){
                dp[0][j]=1;
            }
            else break;
        }

        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                if(obstacleGrid[i][j]){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }

        return dp[r-1][c-1];
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}