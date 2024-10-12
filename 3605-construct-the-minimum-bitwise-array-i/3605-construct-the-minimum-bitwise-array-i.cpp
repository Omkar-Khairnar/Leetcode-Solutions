class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 0) ans.push_back(-1);
            else{
                for(int j=0; j<=1000; j++){
                    if((j | (j+1)) == nums[i]){
                        ans.push_back(j);
                        break;
                    }
                }
            }
        }

        return ans;
    }
};