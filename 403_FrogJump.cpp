#include <bits/stdc++.h>
 
using namespace std;

    //RECURSIVE SOLUTION:
//  bool ans=false;
//     void checkpath(vector<int> stones,int sz, int k, int idx){
//         if(idx==sz-1){
//             ans=true;
//             return;
//         }
//         else if(idx>=sz) return;
//         for(int i=idx+1; i<sz; i++){
//             if(stones[i] ==stones[idx] +k-1){
//                 checkpath(stones,sz, k-1,i);
//             }
//             if(stones[idx] + k ==stones[i]){
//                 checkpath(stones,sz, k,i);
//             }
//             if(stones[idx]+k+1 == stones[i]){
//                 checkpath(stones,sz,k+1,i);
//                 break;
//             }
//         }
//     } 
//     bool canCross(vector<int>& stones) {
//         if(stones[1] !=1) return false;
//         int sz=stones.size();
//         checkpath(stones,sz, 1,1);
//         return ans;
//     }



    bool canCross(vector<int>& stones) {
       map<int, set<int>>mp;
       set<int> row;
       if(stones[1] !=1) return false;
       for(int i=1; i<stones.size(); i++){
           mp.insert(pair<int,set<int>>(stones[i],row));
       }

        auto it=mp.begin();
        it->second.insert(1);

        for(int i=1; i<stones.size();i++){
           
            set<int>st(mp[stones[i]]);
            for(auto it=st.begin(); it!=st.end(); it++){
                int val1=stones[i]+ *it-1;
                int val2=stones[i]+ *it;
                int val3=stones[i]+ *it+1;
                // cout<<vec[i]<<" ";
                if(*it-1>0 && mp.find(val1) !=mp.end()){
                    mp.find(val1)->second.insert(*it-1);
                }
                if(*it>0 && mp.find(val2) !=mp.end()){
                    mp.find(val2)->second.insert(*it);
                }
                if(*it+1>0 && mp.find(val3) !=mp.end()){
                    mp.find(val3)->second.insert(*it+1);
                }
            }
        }
    
       return mp[stones[stones.size()-1]].size()>0;
    }
int main(int argc, char const *argv[])
{
    vector<int>stones={0,1,3,5,6,8,12,17};
 
  return 0;
}