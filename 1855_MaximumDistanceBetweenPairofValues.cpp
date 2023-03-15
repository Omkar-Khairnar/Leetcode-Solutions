#include <bits/stdc++.h>
 
using namespace std;

 int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size(), len2=nums2.size();
        int i=0, j=0;
        int mx=0;

        while(i< len1 && j<len2){
            if(nums1[i] <= nums2[j]){
                j++;
                mx=max(mx, j-i-1);
            }
            else  i++;   
        }

        return mx;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}