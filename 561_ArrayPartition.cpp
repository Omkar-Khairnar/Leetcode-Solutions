#include <bits/stdc++.h>
 
using namespace std;
int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0;
        for (int  i = 0; i < nums.size(); i++)
        {
            if( i % 2 ==0) sum+=nums[i];
        }
    return sum;    
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}