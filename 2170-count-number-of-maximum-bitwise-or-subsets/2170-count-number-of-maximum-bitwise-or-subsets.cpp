class Solution {
public:
    int maxi = 0;
    void fun(int idx, int curr, unordered_map<int,int>&mp, vector<int>&nums){
        if(idx == nums.size()){
            if(curr > maxi) maxi = curr;
            mp[curr]++;
            return ;
        }

        fun(idx+1, curr, mp, nums);
        fun(idx+1, curr|nums[idx], mp, nums);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        unordered_map<int, int>mp;
        fun(0, 0, mp, nums);
        
        return mp[maxi];
    }
};