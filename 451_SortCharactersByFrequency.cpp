#include <bits/stdc++.h>
 
using namespace std;
 string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        sort(s.begin(),s.end());
    
        int ct=0;  
        char ch=s[0];
        for(int i=0; i<s.length(); i++ ){
            if(ch == s[i]){
                ct++;
            }
            else{
                pq.push({ct,ch});
                ch=s[i];
                ct=0;i--;
            }
        }
        pq.push({ct,ch});
        string ans="";
         while(!pq.empty()){
            pair<int,char>pr(pq.top());
            pq.pop();
            char ch=pr.second;
            int ct=pr.first;
            while(ct--){
                ans+=ch;
            }
        }


        return ans;
    }
//  string frequencySort(string s) {
//         priority_queue<pair<int,char>> pq;
//         map<char, int>map;
//         for(int i=0; i<s.length(); i++){
//           map[s[i]]++;
//         }

//         for(auto it=map.begin(); it!=map.end(); it++){
//             pq.push({it->second,it->first});
//         }
//         string ans="";
//         while(!pq.empty()){
//             pair<int,char>pr(pq.top());
//             pq.pop();
//             char ch=pr.second;
//             int ct=pr.first;
//             while(ct--){
//                 ans+=ch;
//             }
//         }

//         return ans;
//     }
 
int main(int argc, char const *argv[])
{
    priority_queue<pair<int,char>> pq;
    pq.push({2,'a'});
    pq.push({1,'b'});
    pq.push({5,'c'});

    while(!pq.empty()){
        cout<<pq.top().first<<endl;
        pq.pop();
    }
 
  return 0;
}