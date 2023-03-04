#include <bits/stdc++.h>
 
using namespace std;
 vector<vector<int>> vec;
 void helper(vector<int>& nums, int index){
    if (index == nums.size())
    {
        vec.push_back(nums);
        return;
    }

    for (int j =index ; j < nums.size(); j++)
    {
       swap(nums[index], nums[j]);
       helper(nums, index+1);
       swap(nums[index], nums[j]);
    }
    
    
 }
 
 vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0);
        return vec;
}
int main(int argc, char const *argv[])
{
 
  return 0;
}