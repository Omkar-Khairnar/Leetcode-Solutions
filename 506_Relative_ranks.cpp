#include <bits/stdc++.h>
 
using namespace std;
 vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<score.size(); i++){
            pq.push({score[i],i});
        }

        string ans[score.size()];
        int index=1;
        while(!pq.empty()){
            pair<int,int>pr(pq.top());
            pq.pop();
            if(index ==1){ ans[pr.second]="Gold Medal"; index++;}
            else if(index ==2){ans[pr.second]="Silver Medal"; index++;}
            else if(index ==3){ans[pr.second]="Bronze Medal"; index++;}
            else {ans[pr.second]=to_string(index);
                    index++;
            }
        }
        vector<string>ab;
        ab.assign(ans, ans+score.size());
        return ab;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}