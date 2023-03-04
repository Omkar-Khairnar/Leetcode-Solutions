#include <bits/stdc++.h>
 
using namespace std;
 vector<int> findDuplicates(vector<int>& nums) {
      int n=nums.size();
        vector<int> ans;
        bool check=false;
        int val=0; int num=0;
        for (int i = 0; i < n; i++)
        {   num=abs(nums[i]);
            if(check && num == n) {ans.push_back(n); check=false;}
            if(num == n) check=true;
            else{
                val=nums[num];
                if(val < 0) ans.push_back(num);
                else nums[num]=-val;
            }
        }

        return ans;  
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}