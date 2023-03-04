#include <bits/stdc++.h>
 
using namespace std;
 int findPeakElement(vector<int>& nums) {
      int len= nums.size();
      if(len ==1 || nums[0]> nums[1]) return 0;
      else if(nums[len-2] < nums[len-1]) return len-1;
      
      int mid=0, low=0, high=len-1;
      while(low<= high){
        mid=(low+high)/2;

        if((mid ==0 || nums[mid-1] <= nums[mid]) && (mid==len-1 || nums[mid]>=nums[mid+1])){
          return mid;
        }
        else if(mid > 0 && nums[mid] <= nums[mid-1]){
          high=mid-1;
        }
        else {
          low=mid+1;
        }
      }  
      return -1;
 } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}