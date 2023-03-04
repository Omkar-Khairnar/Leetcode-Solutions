#include <bits/stdc++.h>
 
using namespace std;
vector<vector<int>> ans;
void helper(vector<int>& nums, vector<int>&temp,int n,int index){
    if(index == n){
        ans.push_back(temp);
        return;
    }

    //Take comdition
    temp.push_back(nums[index]);
    helper(nums,temp, n,index+1);

    temp.pop_back();

    //Not Take Condition
    helper(nums,temp, n,index+1);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> temp;
        helper(nums, temp,nums.size(),0);
        return ans;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}