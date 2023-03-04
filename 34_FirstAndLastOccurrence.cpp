#include <bits/stdc++.h>
 
using namespace std;
 int firstOccurrence(vector<int> &arr, int n, int key){
    int ans=-1;
    int low=0, high=n-1, mid;
    while(low <= high){
        mid=(low+high)/2;
       if(arr[mid]> key){
        high=mid-1;
       }
       else if(arr[mid] < key) {
        low=mid+1;
       }
       else{
        if(mid == 0 || arr[mid-1] != arr[mid]){
            return mid;
        }
        else{
            ans=mid; high=mid-1;
        }
       }
    }
    return ans;
} 
    int LastOccurrence(  vector<int> &arr, int n, int key){
        int ans=-1;
        int low=0, high=n-1, mid;
        while(low <= high){
            mid=(low+high)/2;
        if(arr[mid]> key){
            high=mid-1;
        }
        else if(arr[mid]< key) {
            low=mid+1;
        }
        else{
            if(mid == n-1 || arr[mid+1] != arr[mid]) return mid;
            else low=mid+1;
        }
        }
        return ans;
    } 
 
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOccurrence(nums,nums.size(),target));
        ans.push_back(LastOccurrence(nums,nums.size(),target));

        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}