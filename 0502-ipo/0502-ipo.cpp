class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<vector<int>>vec;

        for(int i=0; i<n; i++){
            vec.push_back({capital[i], profits[i]});
        }
        sort(vec.begin(), vec.end());

        
        priority_queue<int>pq;
        int idx = 0;
        int ans = w;
        while(k--){
            while(idx < n && w >= vec[idx][0]){
                pq.push(vec[idx][1]);
                idx++;
            }
            if(!pq.empty()){
                ans += pq.top();
                w +=pq.top();
                pq.pop();
            }
        }

        return ans;
    }
};