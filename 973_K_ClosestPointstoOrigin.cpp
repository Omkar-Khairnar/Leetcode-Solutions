#include <bits/stdc++.h>
 
using namespace std;
  struct Compare{
        bool operator()(pair<double, int>&a, pair<double,int>&b){
            return a.first > b.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double,int>>,Compare>pq;
        int a,b;
        double dist;
        for(int i=0; i<points.size(); i++){
            a=points[i][0];
            b=points[i][1];
            dist=sqrt(a*a + b*b);
            pq.push({dist,i});
        }

        vector<vector<int>>ans;
        while(k--){
            auto pr=pq.top();
            ans.push_back(points[pr.second]);
            pq.pop();
        }
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}