#include <bits/stdc++.h>
 
using namespace std;
    void addEdge(vector<int>adj[], int a, int b){
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool bfs(vector<int> adj[], bool visited[], int src, int dest){
        queue<int>q;
        q.push(src);
         while(!q.empty()){
             int top=q.front();
             if(top == dest) return true;
             q.pop();
             for(int u:adj[top]){
                 if(!visited[u]){
                    visited[u]=true;
                    
                     q.push(u);   
                 }
             }
         }

         return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        vector<int>adj[n];
        for(int i=0; i<edges.size(); i++){
            addEdge(adj, edges[i][0], edges[i][1]);
        }
        bool visited[n];
        for(int i=0; i<n; i++){
            visited[i]=false;
        }
        visited[source]=true;
        return bfs(adj,visited,source, destination);
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}