#include <bits/stdc++.h>
 
using namespace std;
 vector<vector<int>> ans;
    void helper(int n, int k,int cur, vector<int>row,int sz){
        if(sz == k){
            ans.push_back(row);
            return;
        }
        //here idx<=n-(k-sz)+1 becoz 
        for(int idx=cur; idx <=n-k+sz+1; idx++){
            row.push_back(idx);
            helper(n,k,idx+1,row,sz+1);
            row.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> row;
        helper(n,k,1,row,0);
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}