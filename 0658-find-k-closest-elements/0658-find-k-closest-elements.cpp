class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        vector<int>ans;
        int lb = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
        int i=lb, j = lb;
        int n = nums.size();

        if(lb < n && nums[lb] == x){
            k--;
            ans.push_back(x);
            i--, j++;
        }
        else i--;
        while(k){
            int prev = (i>= 0) ? x-nums[i] : INT_MAX;
            int next = (j < n) ? nums[j]-x : INT_MAX;
            if(prev <= next){
                ans.push_back(nums[i]);
                i--;
            }
            else{
                ans.push_back(nums[j]);
                j++;
            }
            k--;
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};