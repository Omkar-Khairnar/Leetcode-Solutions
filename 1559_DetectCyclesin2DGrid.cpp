#include <bits/stdc++.h>
 
using namespace std;
  bool containsCycle(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>vis(m,vector<int>(n,0));
        pair<int,int>curr,parent;
        int cr,cc;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!vis[i][j]){
                    vis[i][j]=1;
                    char ch=grid[i][j];
                     queue<pair<pair<int,int>,pair<int,int>>>q;
                    q.push({{i,j},{-1,-1}});

                    while(!q.empty()){
                        curr=q.front().first;
                        parent=q.front().second;
                        q.pop();
                        cr=curr.first;
                        cc=curr.second;

                        if(cr+1<m && grid[cr+1][cc]==ch){
                            if(!vis[cr+1][cc]){
                            vis[cr+1][cc]=1;
                            q.push({{cr+1,cc},{cr,cc}});
                            }
                            else if(cr+1 !=parent.first || cc !=parent.second){
                                return true;
                            }
                        }

                        if(cc+1<n && grid[cr][cc+1]==ch){
                            if(!vis[cr][cc+1]){
                                vis[cr][cc+1]=1;
                                q.push({{cr,cc+1},{cr,cc}});
                            }
                            else if(cr !=parent.first || cc+1 !=parent.second){
                                return true;
                            }
                        }
                        if(cr-1 >=0 && grid[cr-1][cc]==ch){
                            if(!vis[cr-1][cc]){
                            vis[cr-1][cc]=1;
                            q.push({{cr-1,cc},{cr,cc}});
                            }
                            else if(cr-1 !=parent.first || cc !=parent.second){
                                return true;
                            }
                        }
                        if(cc-1 >=0 && grid[cr][cc-1]==ch){
                            if(!vis[cr][cc-1]){
                                vis[cr][cc-1]=1;
                                q.push({{cr,cc-1},{cr,cc}});
                            }
                            else if(cr !=parent.first || cc-1 !=parent.second){
                                return true;
                            }
                        }
                    }
                }
            }
        }

        return false;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}