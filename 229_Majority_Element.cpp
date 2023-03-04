#include <bits/stdc++.h>
 
using namespace std;
 vector<int> majorityElement(vector<int>& nums) {
    int ele,c1=0, c2=0, n1,n2;

    for (int i = 0; i < nums.size(); i++)
    {
        ele=nums[i];
        if(ele ==n1) c1++;
        else if(ele == n2) c2++;
        else if(c1 == 0){
            n1=ele;
            c1=1;
        }
        else if(c2 == 0){
            n2=ele;
            c2=1;
        }
        else{
            c1--;c2--;
        }
    }

    c1=0;c2=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == n1) c1++;
        if(nums[i] == n2) c2++;
    }
    vector<int> ans;
    if(c1 > nums.size()/3) ans.push_back(n1);
    if(c2 > nums.size()/3) ans.push_back(n2);

   return ans; 
            
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}