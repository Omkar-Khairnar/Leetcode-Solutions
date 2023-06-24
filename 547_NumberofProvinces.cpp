#include <bits/stdc++.h>
 
using namespace std;
  void bfs(vector<vector<int>>& graph,int src, vector<bool>&visited){
        queue<int>q;
        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            int top=q.front();
            q.pop();
            for(int i=0; i<graph.size(); i++){
                if(graph[top][i]==1 && !visited[i]){
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool>visited(V,false);
        int count=0;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                bfs(isConnected,i,visited);
                count++;
            }
        }
        return count;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}