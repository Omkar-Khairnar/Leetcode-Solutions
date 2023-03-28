#include <bits/stdc++.h>
 
using namespace std;
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> st(nums1.begin(),nums1.end());
      vector<int>ans;
      for(int i: nums2){
        if(st.count(i)){
            ans.push_back(i);
            st.erase(i);
        }
      }
      return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}