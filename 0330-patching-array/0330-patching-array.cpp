class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int sz = nums.size();

        long long maxEle = 0;
        int count = 0;
        int i = 0;
        while(maxEle < n){
            if(i < sz && maxEle+1 >= nums[i]){
                maxEle += nums[i];
                i++;
            }
            else{
                maxEle += maxEle+1;
                count++;
            }
        }

        return count;
    }
};