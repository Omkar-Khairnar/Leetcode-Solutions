#include <bits/stdc++.h>
 
using namespace std;
 
 void bfs(vector<vector<char>> grid, vector<vector<int>>&vis,int i, int j ){
            int n=grid.size();
            int m=grid[0].size();
            queue<pair<int,int>>q;
            q.push({i,j});
            vis[i][j]=1;
            
            while(!q.empty()){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();

                int nr=row+1;
                int nc=col;
                if(nr<n && grid[nr][nc]=='1' && !vis[nr][nc]){
                            vis[nr][nc]=1;
                            q.push({nr,nc});
                }

                nr=row-1;
                if(nr>=0 && grid[nr][nc]=='1' && !vis[nr][nc]){
                            vis[nr][nc]=1;
                            q.push({nr,nc});
                }
                nr=row;
                nc=col+1;
                if(nc<m && grid[nr][nc]=='1' && !vis[nr][nc]){
                            vis[nr][nc]=1;
                            q.push({nr,nc});
                }
                nc=col-1;
                 if(nc>=0 && grid[nr][nc]=='1' && !vis[nr][nc]){
                            vis[nr][nc]=1;
                            q.push({nr,nc});
                }
                
            } 
        }
    int numIslands(vector<vector<char>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    bfs(grid, vis, i, j);
                  count++;
                }
            }
        }
        return count;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}