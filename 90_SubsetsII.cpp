#include <bits/stdc++.h>
 
using namespace std;
  vector<vector<int>> ans;
    vector<int> v;
void helper(vector<int>& nums, vector<int>&temp,int n,int index){
    if(index == n){
       v=temp;
        sort(v.begin(), v.end());
         if(count(ans.begin(),ans.end(),v))  return;
       else{
        ans.push_back(v);
        return;
      }  
    }

    //Take comdition
    temp.push_back(nums[index]);
    helper(nums,temp, n,index+1);

    temp.pop_back();

    //Not Take Condition
    helper(nums,temp, n,index+1);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int> temp;
    helper(nums,temp,nums.size(),0);
    return ans;
} 
 
int main(int argc, char const *argv[])
{
    vector<int> vec={2,3,4};
    vector<int> v;
    v=vec;
    for(int i: v){
        cout<<i<<endl;
    }
 
  return 0;
}