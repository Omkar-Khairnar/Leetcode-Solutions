class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int ans = 0;
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            ans = max(ans, values[i]-i + mx);
            mx = max(mx, values[i]+i);
        }

        return ans;

    }
};