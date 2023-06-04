#include <bits/stdc++.h>
 
using namespace std;
    //Solution by graph
    void addEdge(vector<int>adj[], int a, int b){
        adj[a].push_back(b);
    }
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>adj[n+1];
        map<int,int>mp;
        for(int i=0; i<trust.size(); i++){
            addEdge(adj, trust[i][0], trust[i][1]);
            mp[trust[i][1]]++;
        }
        for(int i=1; i<=n ; i++){
            //Chechking here Indegree should be (n-1) and Outdegree should be 0.
            if(adj[i].size()==0 && mp[i]==n-1){
                return i;
            }
        }
        return -1;
    }


    //Solution by Array
    int findJudge(int n, vector<vector<int>>& trust) {
          vector<int>in(n+1,0);
          vector<int>out(n+1,0);
          for(int i=0; i<trust.size(); i++){
              in[trust[i][1]]++;
              out[trust[i][0]]++;
          }

          for(int i=1; i<=n; i++ ){
              if(in[i]==n-1 && out[i]==0){
                  return i;
              }
          }
          return -1;
      }

int main(int argc, char const *argv[])
{
 
  return 0;
}