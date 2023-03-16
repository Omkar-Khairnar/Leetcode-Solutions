#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> sortArrayByParity(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        while(low<high){
           if(nums[low] %2 == 0){
            low++;
           }
           else if(nums[high] %2!=0){
            high--;
           }
           else{
            swap(nums[low], nums[high]);
            low++; high--;
           }
        }
        return nums;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}