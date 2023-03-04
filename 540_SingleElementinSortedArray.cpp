#include <bits/stdc++.h>
 
using namespace std;

//Naive Solution
//   int singleNonDuplicate(vector<int>& nums) {
//      if(nums.size() == 1) return nums[0];
//      int a=0;   
//      while(a< nums.size()){
//        if(a == nums.size()-1) return nums[a];
//        else if(nums[a] !=nums[a+1]) return nums[a];
//        else a+=2;
//      }
//     return -1;
//     }

 int singleNonDuplicate(vector<int>& nums) {
    int len=nums.size();
    int low=0, high=len-1, mid=0;

    //Boundary Cases
    if(len ==1) return nums[0];
    else if(nums[0] !=nums[1]) return nums[0];
    else if(nums[high] != nums[high-1]) return nums[high];

    while(low <= high){
        mid=(low+high)/2;

        if(mid % 2 ==0){
            if(nums[mid] == nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            if(nums[mid] != nums[mid-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

    }
    return nums[low];
 }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}