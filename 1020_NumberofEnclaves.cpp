#include <bits/stdc++.h>
 
using namespace std;
 void bfs(vector<vector<int>>&grid, int i, int j, int m, int n){
        grid[i][j]=0;
        queue<pair<int,int>>q;
        q.push({i,j});

        while(!q.empty()){
            i=q.front().first;
            j=q.front().second;
            q.pop();

            if(i-1>=0 && grid[i-1][j]==1){
                grid[i-1][j]=0;
                q.push({i-1,j});
            }
            if(j-1>=0 && grid[i][j-1]==1){
                grid[i][j-1]=0;
                q.push({i,j-1});
            }
            if(i+1 < m  && grid[i+1][j]==1){
               grid[i+1][j]=0;
               q.push({i+1,j});
            }
            if(j+1 < n && grid[i][j+1]==1){
                grid[i][j+1]=0;
                q.push({i,j+1});
            }
        }

        return ;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        // vector<vector<int>>vis(m, vector<int>(n,0));

        //Traversing in the boundary

        for(int i=0; i<m ; i++){
            if(grid[i][0]==1){
                // vis[i][0]=1;
                bfs(grid, i, 0, m,n);
            } 
            if(grid[i][n-1]==1){
                // vis[i][n-1]=1;
                bfs(grid, i, n-1, m,n);   
            } 
        }
        for(int j=0; j<n; j++){
            if(grid[0][j]==1 ){
                // vis[0][j]=1;
                bfs(grid, 0, j, m,n);
            } 
            if(grid[m-1][j]==1 ){
                // vis[m-1][j]=1;
                bfs(grid, m-1, j, m,n);
            } 
        }

        int count=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1 ) count++;
            }
        }
        return count;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}