class Solution {
public:
    int maxi = 0;
    int fun(int idx, int curr, vector<vector<int>>&dp, vector<int>&nums){
        if(idx == nums.size()){
            if(curr == maxi) return 1;
            return 0;
        }

        if(dp[idx][curr] != -1){
            return dp[idx][curr];
        }

        int notTake = fun(idx+1, curr, dp, nums);
        int take = fun(idx+1, curr|nums[idx], dp, nums);

        return dp[idx][curr] = take+notTake;
    }


    int countMaxOrSubsets(vector<int>& nums) {
        for(int u : nums) maxi = maxi | u;
        int n = nums.size();
        vector<vector<int>>dp(n, vector<int>(maxi+1, -1));
        int ans = fun(0, 0, dp, nums);

        return ans;
    }
};