#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> vec;
         map<int, int> map;
         for (int i = 0; i < nums.size(); i++)
         {
          if(map.count(target - nums[i]) > 0){
            auto it=map.find(target - nums[i]);
            vec.push_back(it->second);
            vec.push_back(i);
          }
          else{
          map[nums[i]]=i;
          }
         }
         return vec;   
}


int main()
{
    map<int, int> map;
    map[10]=0;
    map[20]=1;
    map[30]=2;
    auto it= map.find(10);

        it++;
    cout<<it->second;  
    return 0;
}
