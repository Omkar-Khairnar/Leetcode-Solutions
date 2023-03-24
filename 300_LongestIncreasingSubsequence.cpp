#include <bits/stdc++.h>
 
using namespace std;

int greaterOrEqual(vector<int>& num, int x){
    int low=0, high=num.size()-1, mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(num[mid]==x){
            return mid;
        }
        else if(num[mid] > x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
} 

 int lengthOfLIS(vector<int>& nums) {
     int sz=nums.size();
     vector<int>sub;
     int max=INT_MIN;   
     for(int i=0; i<sz; i++){
        if(nums[i]>max){
            max=nums[i];
            sub.push_back(max);
        }
        else{
            int pos=greaterOrEqual(sub, nums[i]);
            sub[pos]=nums[i];
        }
     }
     return sub.size();
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}