#include <bits/stdc++.h>
 
using namespace std;
   bool bfs(vector<vector<int>>& graph, vector<int>&color, int src){
        color[src]=0;

        queue<int>q;
        q.push(src);

        while(!q.empty()){
            int top=q.front();
            q.pop();
            for(int u:graph[top]){
                //If node is not colored then coloring reverse color of parent
               if(color[u]==-1){
                    color[u]=!color[top];
                    q.push(u);
                }
                //If color of node is same as parent color then its not bipartite
                else if(color[u]==color[top]){
                    return false;
                }
            } 
            
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);

        for(int i=0; i<n; i++){
            if(color[i]==-1){
                if(bfs(graph,color,i)==false) return false;
            }
        }

        return true;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}