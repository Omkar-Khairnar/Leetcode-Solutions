#include <bits/stdc++.h>
 
using namespace std;
int missingNumber(vector<int>& nums) {
    int n=nums.size();
    n=(n*(n+1))/2;

    int SumArray=accumulate(nums.begin(), nums.end(), 0);
    return n-SumArray;
    
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}