#include <bits/stdc++.h>
 
using namespace std;
vector<vector<int>> vec;
void helper(vector<int>& nums, vector<int>& temp, int currSum, int target, int index){
    if(currSum > target || index == nums.size()){
      return;
    }
    if(currSum == target){
     if(count(vec.begin(), vec.end(), temp)){
           return;
       }
       else{
            vec.push_back(temp);
            return;
       } 
    }

    //Take but not increase index
      temp.push_back(nums[index]);
      int nowSum1=accumulate(temp.begin(), temp.end(),0);
      helper(nums, temp,nowSum1,target,index);


      temp.pop_back();
      
       //Not take and Increase Index.
        int nowSum3=accumulate(temp.begin(), temp.end(),0);
         helper(nums, temp,nowSum3,target,index+1);

  
  return;

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> temp;
        helper(candidates,temp, 0,target, 0 );
        return vec;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}