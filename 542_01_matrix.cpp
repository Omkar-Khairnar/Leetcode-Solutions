#include <bits/stdc++.h>
 
using namespace std;
 
 void bfs(vector<vector<int>> mat, vector<vector<int>>&ans, queue<pair<pair<int,int>,int>>q, vector<vector<int>>&vis ){
        int m=mat.size();
        int n=mat[0].size();

        while(!q.empty()){
            
                pair<int,int> pr=q.front().first;
                int d=q.front().second;
                int r=pr.first; int c=pr.second;
                ans[r][c]=d;
                q.pop();
                if(r-1 >=0 && !vis[r-1][c] ){
                    if(mat[r-1][c]==1){
                        vis[r-1][c]=1;
                       q.push({{r-1,c},d+1});
                    }
                   
                }
                if(c-1>=0 && !vis[r][c-1] ){
                     if(mat[r][c-1]==1){
                        vis[r][c-1]=1;
                        q.push({{r,c-1},d+1});
                    }
                    
                }
                if(r+1 < m && !vis[r+1][c] ){
                    if(mat[r+1][c]==1){
                        vis[r+1][c]=1;
                        q.push({{r+1,c},d+1});
                    }
                    
                }
                if(c+1<n && !vis[r][c+1] ){
                     if(mat[r][c+1]==1){
                        vis[r][c+1]=1;
                       q.push({{r,c+1},d+1});
                    }
                    
                }
            
        }
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(m, vector<int>(n,0));
        vector<vector<int>>vis(m, vector<int>(n,0));
        queue<pair<pair<int,int>,int>>q;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0){
                   q.push({{i,j},0});
                   ans[i][j]=0;
                   vis[i][j]=1;
                }
            }
        }
        bfs(mat,ans,q,vis);
        return ans;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}