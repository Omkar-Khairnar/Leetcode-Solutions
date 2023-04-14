#include <bits/stdc++.h>
 
using namespace std;
//     struct Compare{
//         bool operator()(const pair<int, vector<int>>&a, const pair<int,vector<int>>&b){
//             return a.first < b.first;
//         }
//     }; 

//   vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//         priority_queue<pair<int,vector<int>>, vector<pair<int,vector<int>>>, Compare> pq;
//         vector<int>v;
//         int sum;
//         for (int i = 0; i < nums1.size(); i++)
//         {
//             for (int j = 0; j < nums2.size(); j++)
//             {
//                 v.push_back(nums1[i]);
//                 v.push_back(nums2[j]);
//                 sum=nums1[i]+nums2[j];
//                 if(k--){
//                     pq.push({sum,v});
//                 }
//                 else if(sum < pq.top().first){
//                     pq.pop();
//                     pq.push({sum,v});
//                 }
//                 v.clear();
//             }
            
//         }

//         vector<vector<int>> ans;
//         while(!pq.empty()){
//             pair<int,vector<int>>p(pq.top());
//             pq.pop();
//             ans.push_back(p.second);
//         }
//        return ans;   
//     }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}