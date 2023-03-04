#include <bits/stdc++.h>
using namespace std;

  int findArraySum(vector<int> arr ){
    int ArraySum=0;
    for (int i = 0; i < arr.size(); i++)
    {
       ArraySum=ArraySum+ arr[i];
    }
    return ArraySum;  
  }

  //Solution--1)
  // int pivotIndex(vector<int>& nums) {
  //    int len=nums.size();
  //     int sum=findArraySum(nums);
  //     map<int, pair<int ,int>> m;
  //     if( sum == 0){
      
  //       return 0;
  //     }
  //      else
  //     {
  //       m[0]={0, findArraySum(nums) - nums[0] };
  //     }
  //     for (int i = 1; i < len; i++)
  //     {
  //       if (m[i-1].first + nums[i-1] == m[i-1].second - nums[i] )
  //       {
  //         return i;
  //       }
  //       else{
  //       m[i]={m[i-1].first + nums[i-1] , m[i-1].second - nums[i] };
  //       }
  //     }
  //     return -1;
        
  //   }

//  Solution-->2)

   int pivotIndex(vector<int>& nums) {
    int rightSum=findArraySum(nums);
    int leftSum=0;

    for (int i = 0; i < nums.size(); i++)
    {
        if(leftSum == rightSum- nums[i]){
          return i;
        }
        leftSum+=nums[i];
        rightSum-=nums[i];
    }
    return -1;
    
   }

int main(int argc, char const *argv[])
{ 
  vector<int> vec={1,7,3,6,5,6};
  // vector<int> vec={1,7,3,6,5,6};
  cout<<pivotIndex(vec);

    
  return 0;
}