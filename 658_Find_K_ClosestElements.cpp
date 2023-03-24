#include <bits/stdc++.h>
 
using namespace std;
    // Solution using priority queue i.e. MAX HEAP here
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>>pq;
        vector<int> ans;
        int diff;
        for (int i = 0; i < k; i++)
        {
            pq.push({abs(arr[i]-x), i});
        }
        
        for (int i = k; i < arr.size(); i++)
        {
            diff=abs(arr[i]-x);
            if(diff < pq.top().first || (diff == pq.top().first && arr[i] < arr[ pq.top().second])){
                pq.pop();
                pq.push({diff,i});
            }
            else continue;
        }

        while(!pq.empty()){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
      sort(ans.begin(), ans.end());
        return ans;
    }


 
int main(int argc, char const *argv[])
{
//  vector<int> v={1,2,3};
//  v.pop_back();
//  for(int i:v){
//     cout << i<<endl;
//  }
  return 0;
}