#include <bits/stdc++.h>
 
using namespace std;
  void bfs(vector<vector<int>>& grid,  set<vector<pair<int,int>>>&st, int i, int j ){
        int n=grid.size(); int m=grid[0].size();
        // grid[i][j]=0;
        queue<pair<int,int>>q;
        q.push({i,j});
        vector<pair<int,int>>vec;
        
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            //Here considering (i,j) as origin of island so difference of all similar will be same 
            vec.push_back({row-i,col-j});
            
            //here following D->U->R->L Orientation
            
             int nr=row+1;
                int nc=col;
                if(nr<n && grid[nr][nc]==1){
                            grid[nr][nc]=0;
                            q.push({nr,nc});
                }

                nr=row-1;
                if(nr>=0 && grid[nr][nc]==1){
                            grid[nr][nc]=0;
                            q.push({nr,nc});
                }
                nr=row;
                nc=col+1;
                if(nc<m && grid[nr][nc]==1){
                            grid[nr][nc]=0;
                            q.push({nr,nc});
                }
                nc=col-1;
                 if(nc>=0 && grid[nr][nc]==1 ){
                            grid[nr][nc]=0;
                            q.push({nr,nc});
                }
        }
        
        st.insert(vec);
    }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        set<vector<pair<int,int>>>st;
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    bfs(grid, st,i,j);
                }
            }
        }
        
        return st.size();
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}