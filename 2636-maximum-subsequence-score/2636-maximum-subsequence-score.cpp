class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        priority_queue<int, vector<int>, greater<int>>pq;
        vector<vector<int>>vec;
        for(int i=0; i<nums2.size(); i++){
            vec.push_back({nums2[i],i});
        }
        sort(vec.begin(), vec.end(), greater<vector<int>>());

        int startIndex = k-1;
        long long sum =0;
        for(int i=0; i<=startIndex; i++){
            pq.push(nums1[vec[i][1]]);
            sum += nums1[vec[i][1]];
        }
        long long maxi = sum * vec[startIndex][0];

        for(int i=startIndex+1; i<nums2.size(); i++){
            sum -= pq.top();
            sum += nums1[vec[i][1]];
            pq.pop();
            pq.push(nums1[vec[i][1]]);
            maxi = max(maxi, sum*vec[i][0]);
        }

        return maxi;
    }

};