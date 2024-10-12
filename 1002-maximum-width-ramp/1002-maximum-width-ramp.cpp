class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>grid;
        int maxi = 0;
        for(int i=0; i<n; i++){
            grid.push_back({nums[i], i});
        }
        sort(grid.begin(), grid.end());

        int minIdx = grid[0][1];

        for(int i=1; i<n; i++){
            if(grid[i][1] > minIdx){
                maxi = max(maxi, grid[i][1] - minIdx);
            }
            minIdx = min(minIdx, grid[i][1]);

        }

        return maxi;
    }
};