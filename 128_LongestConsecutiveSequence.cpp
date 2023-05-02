#include <bits/stdc++.h>
 
using namespace std;
  int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        int ct=1;
        auto it=st.begin();
        int val=*it;
        int mx=1;
        it++;
        for(it; it!=st.end(); it++){
            if(*it == val+1){
                val=*it;
                ct++;
                if(ct > mx) mx=ct;
            }
            else{
                mx=max(mx, ct);
                ct=1;
                val=*it;
            }
        }
        return mx;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}