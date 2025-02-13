class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        for(int i=0; i<nums.size(); i++) pq.push(nums[i]);

        int opr = 0;
        while(k > pq.top() && pq.size() >=2){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long val = (long long)min(a, b)*2 + (long long)max(a, b);
            pq.push(val);
            opr++;
        }
        return opr;
    }
};