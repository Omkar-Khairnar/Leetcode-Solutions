class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int incr = 0;
        for(int i=1; i<n; i++){
            if(nums[i-1] >= nums[i]){
                incr += nums[i-1]-nums[i]+1;
                nums[i] = nums[i-1]+1; 
            }
        }

        return incr;

    }

    // 1 1 2 2 3 7
};