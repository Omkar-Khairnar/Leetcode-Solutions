#include <bits/stdc++.h>
 
using namespace std;
    int pos=-1;
int helpSearch(vector<int>& nums, int target){
    int len=nums.size();
    int low=0, high=len-1, mid=0;

    if(target == nums[0]) return 0;
    else if(target ==nums[len-1]) return len-1;

    if(target < nums[0]) return 0;
    else if(target > nums[len-1]) return len;

    while(low <= high){
        mid=(low+ high)/2;

        if (nums[mid]==target) return mid;
        else if(target > nums[mid]){
            if(target < nums[mid+1]) pos=mid+1;
            low=mid+1;
        }
        else{
            if(target > nums[mid-1]) pos=mid;
            high=mid-1;
        }
    
    }
    return pos;
}

//Efficient Solution
int helpSearch(vector<int>& nums, int target){
    int len=nums.size();
    int low=0, high=len-1, mid=0;

    while(low<=high){
         mid=(high+low)/2;
         if (nums[mid]==target) return mid;
        else if(target > nums[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}

int searchInsert(vector<int>& nums, int target) {
        return helpSearch(nums,target);
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}