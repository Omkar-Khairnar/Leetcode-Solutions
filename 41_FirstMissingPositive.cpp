#include <bits/stdc++.h>
 
using namespace std;

 int firstMissingPositive(vector<int>& nums) {
        bool checkOne=false;
        set<int> st;
        int sz=nums.size();
        int val;
        for (int i = 0; i <sz ; i++)
        {   val=nums[i];
            if(val == 1){
                 checkOne=true;
                 st.insert(val);
            }
            else if( val >0 && val <= sz) st.insert(val);
        }
        if(!checkOne) return 1;
        val=1;
        for(auto it:st){
            if(it != val) return val;
            else {it++; val++;}
        }
    return val;
 }        
 
int main(int argc, char const *argv[])
{
 
  return 0;
}