#include <bits/stdc++.h>
 
using namespace std;
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        //here we are using topological sorting to check whether it is cyclic or acyclic
        vector<int>indeg(numCourses,0);
        vector<int>adj[numCourses];

        for(int i=0; i<prerequisites.size(); i++){
            indeg[prerequisites[i][0]]++;
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        queue<int>q;
        for(int i=0; i<numCourses; i++){
            if(indeg[i]==0) q.push(i);
        }
        int ct=0;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ct++;
            for(int u: adj[temp]){
                indeg[u]--;
                if(indeg[u]==0) q.push(u);
            }
        }
        cout<<ct;
        return ct==numCourses;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}