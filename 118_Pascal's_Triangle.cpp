#include <bits/stdc++.h>
 
using namespace std;
 vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows==1){
            return ans;
        }
        ans.push_back({1,1});
        if(numRows==2){
            return ans;
        }
        int idx=3;
        int remain=0;
        vector<int>prev={1,1};
        while(idx <=numRows){
            vector<int>curr;
            curr.push_back(1);
               for(int i=0; i<prev.size()-1;i++){
                   curr.push_back(prev[i]+prev[i+1]);
               }
            curr.push_back(1);
            ans.push_back(curr);   
           prev=curr;
           idx++;
        }
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}