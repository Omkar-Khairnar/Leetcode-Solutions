class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int l = 0, r = n-1, mid;

        while(l <= r){
            mid = (l+r)/2;
            if((mid==0 && nums[mid]>nums[mid+1]) || (mid==n-1 && nums[mid] > nums[mid-1]) || (mid != 0 && mid != n-1 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])){
                return mid;
            }
            else if(mid < n-1 && nums[mid] < nums[mid+1]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        return 0;
    }
};