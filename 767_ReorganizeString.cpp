#include <bits/stdc++.h>
 
using namespace std;
 string reorganizeString(string s) {
        priority_queue<pair<int, char>>pq;
        unordered_map<char, int>mp;
        for(char i:s){
          mp[i]++;
        }
        for(auto kt=mp.begin(); kt!=mp.end(); kt++){
          pq.push({kt->second, kt->first});
        }
        int len=s.length();
        auto it=pq.top();
        if(it.first > (len+1)/2) return "";
        string ans=s;
        int index=0;
        int val=it.first;
        while(index < len && !pq.empty()){
            if(val && index<len){
              ans[index]=it.second;
              index+=2;
              val--;
              if(index >= len) index=1;
            }
            else{
              pq.pop();
              it=pq.top();
              val=it.first;
            }
       }

      return ans;        
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}
 string reorganizeString(string s) {
        unordered_map<char, int>mp;
        for(char i:s){
            mp[i]++;
        }
        string ans="";
         auto it=mp.begin();
         while(!mp.empty()){
             if(it == mp.end()) it=mp.begin();

             if(it->second > 0) {
                ans=ans+it->first;
                it->second--;
             }
             

             it++;   
         }
    }