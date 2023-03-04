#include <bits/stdc++.h>
 
using namespace std;
int largestSumAfterKNegations(vector<int>& nums, int k) {
   sort(nums.begin(), nums.end());
   int sum=0, index=0;
    if(nums.size()==1){
        if (k % 2==0) return nums[0];
        else return -nums[0];    
    }
    while (k>0 && index < nums.size())
    {
        if(nums[index]<0 && abs(nums[index]) > abs(nums[index+1])){
            nums[index]=-nums[index];
            k--;
            index++;
        }
        else if(nums[index]<=0 && nums[index+1]>=0)
        {
             if (k % 2==0)  nums[index]= nums[index];
             else nums[index]= -nums[index];  
             k=0;
        }
        else if(nums[index] >=0){
            if (k % 2==0)  nums[index]= nums[index];
             else nums[index]= -nums[index];  
             k=0;
        }
    }
    
    sum=accumulate(nums.begin(),  nums.end(),0);
   return sum;     
}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}