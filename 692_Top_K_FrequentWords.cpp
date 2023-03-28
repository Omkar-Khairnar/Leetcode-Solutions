#include <bits/stdc++.h>
 
using namespace std;
struct Compare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
           if(a.first==b.first){
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};
 vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        map<string, int>mp;
        for (int i = 0; i < words.size(); i++)
        {
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>, vector<pair<int,string>>, Compare>pq;
        int i=0;
        auto it=mp.begin();
        while(i !=k){
            pq.push({it->second, it->first});
            i++;it++;
        } 

        for(it ; it!=mp.end(); it++){
            if(pq.top().first < it->second){
                pq.pop();
                pq.push({it->second, it->first});
            }
        }  

       while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
       }
       reverse(ans.begin(), ans.end());
       return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}