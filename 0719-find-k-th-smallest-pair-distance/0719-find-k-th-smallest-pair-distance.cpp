class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = INT_MAX;
        int h = nums[n-1] - nums[0];
        for(int i=1; i<n; i++){
            l = min(l, nums[i]-nums[i-1]);
        }

        if(l == h) return l;

        while(l <= h){
            int mid = (l + h)/2;
            int count = 0;
            bool isPresentExactDiff = false;
            for(int i=0; i<n; i++){
                int target = nums[i] - mid;
                int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
                if(nums[lb] == target) isPresentExactDiff = true;
                count += (i-lb);
            }
            if(count == k && isPresentExactDiff){
                return mid;
            }
            if(count >= k){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        return l;
    }
};