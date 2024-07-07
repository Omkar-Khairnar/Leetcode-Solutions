class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n <= 4) return 0;
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for(int i=0; i<=3; i++){
            int j = n - (3-i) -1;
            if(i > j) break;
            mini = min(mini, nums[j]-nums[i]);
        }

        return mini;
    }
};