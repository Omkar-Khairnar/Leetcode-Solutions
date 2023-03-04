#include <bits/stdc++.h>
 
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
       map<int, int> map;
       for(auto i : nums){
        map[i]++;
       } 
       int a=0, b=0;
       multimap<int, int> mm;
       for(auto it :map){
            mm.insert(pair<int, int>(it.second, it.first));
       }
       int len =mm.size(); int ct=0;
       for(auto it :mm){
            if( len -ct <=k){
                ans.push_back(it.second);
            }
            ct++;
       }
       return ans;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}