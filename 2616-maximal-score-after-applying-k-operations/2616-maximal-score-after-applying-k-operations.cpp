#define ll long long
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        ll ans = 0;
        priority_queue<int>pq;
        for(int u : nums) pq.push(u);

        while(k--){
            int u = pq.top();
            pq.pop();
            ans += (ll)u;
            pq.push(ceil((double)u/3));
        }
        return ans;
    }
};