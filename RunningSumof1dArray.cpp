#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
   vector<int> sum; int val=0;
   for (int i = 0; i < nums.size(); i++)
   {    val=val+nums[i];
        sum.push_back(val);   
   }
   return sum;
        
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
