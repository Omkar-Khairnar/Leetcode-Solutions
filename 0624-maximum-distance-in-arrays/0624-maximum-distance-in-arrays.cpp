class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mx = 0;
        int n = arrays.size();
        int currSz;
        int maxi = arrays[0][arrays[0].size()-1];
        int mini = arrays[0][0];

        for(int i=1; i<n; i++){
            currSz = arrays[i].size();
            mx = max(mx, max(abs(arrays[i][currSz-1] - mini), abs(arrays[i][currSz-1] - maxi)));
            mx = max(mx, max(abs(arrays[i][0] - mini), abs(arrays[i][0] - maxi)));
            maxi = max(maxi, arrays[i][currSz-1]);
            mini = min(mini, arrays[i][0]);
        }

        return mx;  
    }
};