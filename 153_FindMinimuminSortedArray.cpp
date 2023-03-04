#include <bits/stdc++.h>
 
using namespace std;
int findMin(vector<int>& nums) {
    int len=nums.size();
    int low=0, high=len-1, mid=0,mn=5001;
    if(len == 1){
        return nums[0];
    }
    while(low<= high){
    if(nums[low] < nums[high]){
        mn=min(mn, nums[low]);
        break;
    }

        mid=(high+low)/2;
        mn=min(nums[mid], mn);

        if(nums[mid] >= nums[low]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return mn;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}