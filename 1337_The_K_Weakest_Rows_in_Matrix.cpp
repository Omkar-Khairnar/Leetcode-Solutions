#include <bits/stdc++.h>
 
using namespace std;
int searchInRow(vector<int> nums){
    int len=nums.size();
    int low=0, high=len-1, mid=0;

    while(low <= high){
        mid=(low+high)/2;

        if(nums[mid] == 0){
            high=mid-1;
        }
        else if(mid < len-1 && nums[mid+1] ==0){
            return mid;
        }
        else{
            low=mid+1;
        }
    }
    return high;
}

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    multimap<int, int> map;
    vector<int> ans;
    int v1,v2;
    for(int i=0; i<mat.size(); i++){
        v1=searchInRow(mat[0]);
       map.insert(pair<int, int>(v1,i));
    }
    auto it=map.begin();
    for(int i=0; i<k; i++){
        ans.push_back(it->second);
        it++;
    }
    return ans;
}

 
int main(int argc, char const *argv[])
{
 
  return 0;
}