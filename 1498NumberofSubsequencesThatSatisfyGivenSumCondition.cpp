#include <bits/stdc++.h>
 
using namespace std;
 
    //Solution1: Recursive solution which will also find subsequences but it is time consuming.
//  int ct=0;
//     void findSeq(vector<int>& nums, int target,vector<int> temp, int idx, int sz){
//         if(idx > sz){
//             int templen=temp.size();
//             if(templen && temp[0]+temp[templen-1] <=target){
//                 ct++; 
//                 return;
//             }
//             else return;
//         }

//         temp.push_back(nums[idx]);
//         findSeq(nums,target,temp,idx+1,sz);
//         temp.pop_back();
//         findSeq(nums,target,temp,idx+1,sz);
//     }
//     int numSubseq(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         int len=nums.size();
//        int high=len-1;
//         if(target<nums[len-1]){
//             int low=0,mid=0;
//             while(low<=high){
//                 mid=(low+high)/2;
//                 if(nums[mid]==target){
//                     high=mid;
//                     break;
//                 }
//                 else if(nums[mid] > target){
//                     high=mid-1;
//                 }
//                 else{
//                     low=mid+1;
//                 }
//             }
//         }
//         vector<int>temp;
//         findSeq(nums,target,temp,0,high);

//         // cout<<ct;
//         return ct %((int)pow(10,9)+7);
//     }


    //Solution2: Its working , but for bigger values its giving typecasting overflow error.
// int numSubseq(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//          long double ct=0, sum=0;
//         int len=nums.size();
//         for(int i=0; i<len; i++){
//             for(int j=i; j<len; j++){
//                 if(nums[i]+nums[j]<=target){
//                     if(j==i)ct++;
//                     else{
//                      ct =fmod((ct +fmod(pow(2,j-i-1), (pow(10,9)+7))),(pow(10,9)+7));
//                     }
//                 }
//                 else continue;
//             }
//         }
//         int ans=(long long)fmod(ct, (pow(10,9)+7));
//         return ans;
//     } 
int main(int argc, char const *argv[])
{
 
  return 0;
}