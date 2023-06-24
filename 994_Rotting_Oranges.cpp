#include <bits/stdc++.h>
 
using namespace std;
  int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        queue<pair<int,int>>q;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }

        int time=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int r=q.front().first;
                int c=q.front().second;
                q.pop();

                if(r-1>=0 && grid[r-1][c]==1){
                    grid[r-1][c]=2;
                    q.push({r-1,c});
                }
                 if(c-1>=0 && grid[r][c-1]==1){
                    grid[r][c-1]=2;
                    q.push({r,c-1});
                }
                if(r+1<m && grid[r+1][c]==1){
                    grid[r+1][c]=2;
                    q.push({r+1,c});
                }
                if(c+1<n && grid[r][c+1]==1){
                    grid[r][c+1]=2;
                    q.push({r,c+1});
                }
            }
            time++;
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }

        return time!=0 ? time-1 :time;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}