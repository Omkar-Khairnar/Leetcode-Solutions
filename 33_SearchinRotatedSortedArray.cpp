#include <bits/stdc++.h>
 
using namespace std;

int search(vector<int>& nums, int target) {
      int high=nums.size()-1;
      int low=0;
      int mid;
    // [4,5,6,7,0,1,2]
      while(low<=high){
         mid=(low+high)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[low] <= nums[mid]){
            if(target>= nums[low] && target < nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[high] >=target && target > nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

      }
return -1;

} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}