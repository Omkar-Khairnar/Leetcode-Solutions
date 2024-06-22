class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        nums[0] = (nums[0]&1);
        for(int i=1; i<n; i++){
            nums[i] = nums[i-1] + (nums[i] & 1);
        }

        int count=0;
        mp[0]=1;
        for(int i=0; i<n; i++){
            int curr = nums[i];
            count += mp[curr-k];
            mp[curr]++;
        }

        return count;
    }
};