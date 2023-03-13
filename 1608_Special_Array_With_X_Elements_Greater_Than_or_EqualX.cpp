#include <bits/stdc++.h>
 
using namespace std;

 int findfirstGreaterOrequal(vector<int> &nums, int target){
        int low=0, high=nums.size()-1, mid;

        while (low <= high)
        {
            mid=(low+high)/2;
            if(nums[mid] == target){
                high=mid-1;
            }
            else if(nums[mid] > target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return nums.size()-high-1;
        
    }
    int specialArray(vector<int>& nums) {
     sort(nums.begin(), nums.end());
      for (int  i = 1; i <= nums[nums.size()-1]; i++)
      {
        int checkCount=findfirstGreaterOrequal(nums, i);
        if(checkCount == i) return i;
      }
      
    return -1;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}