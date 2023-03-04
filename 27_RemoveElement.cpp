#include <bits/stdc++.h>
 
using namespace std;
int removeElement(vector<int>& nums, int val) {
     int k=nums.size();
    if(k == 0) return k;
    else if( k== 1){
        if(nums[0] == val) return 0;
        else return k;
    }
    int i=0;k--;
    while(k >= i){
        while(k>=0 && nums[k] == val ) k--;
        if( k>0 && nums[i] ==val){
            swap(nums[i], nums[k]);
        }
        i++;
    }
    if(k < 0) return 0;
    else return k+1;
}
int main(int argc, char const *argv[])

{
 
  return 0;
}