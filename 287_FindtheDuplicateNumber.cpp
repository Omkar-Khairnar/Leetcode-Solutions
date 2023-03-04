#include <bits/stdc++.h>
 
using namespace std;

 int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int val=0; int num=0;
        for (int i = 0; i < n; i++)
        {   
            num=abs(nums[i]);
            val=nums[num];
            if(val < 0) return num;
            else nums[num]=-val;
            
        }

        return -1;  
    } 


    //Another Approach
    //    while(arr[0] != arr[arr[0]]){
    //         swap(arr[0], arr[arr[0]]);
    //     }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}