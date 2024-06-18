class Solution {
public:
    long long totalCost(vector<int>& cost, int k, int candidates) {
        long long val = 0;
        int n = cost.size();
        int l=0, r=n-1;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        int temp = candidates;
        while(temp--){
            if(l < r){
                pq.push({cost[l], l});
                pq.push({cost[r], r});
                l++, r--;
            }
            else if(l == r){
                pq.push({cost[l],l});
                l++;r--;
            }
            else break;
        }

        while(k--){
            auto pr = pq.top();
            pq.pop();
            int ind = pr.second;
            val += pr.first;
            if(l > r) continue;
            if(l == r){
                pq.push({cost[l],l});
                l++; r--;
            }
            else if(abs(ind-l) < abs(ind-r)){
                pq.push({cost[l],l});
                l++;
            }
            else{
                pq.push({cost[r],r});
                r--;
            }
        }


        return val;
    }
};