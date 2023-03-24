#include <bits/stdc++.h>
 
using namespace std;
 
 int triangleNumber(vector<int>& nums) {
        int ct=0,j, high=nums.size()-1, low=0;
        sort(nums.begin(), nums.end());

        while(low < high){
            low=0;
            j=high-1;
            while(j > low){
                if(nums[j] + nums[low] > nums[high]){
                    ct+=j-low;
                   j--;
                }
                else low++;
            }
        }
        return ct;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}