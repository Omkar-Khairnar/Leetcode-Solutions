class Solution {
public:
    bool fun(int mid, int k, vector<int>&nums){
        int j=1;
        int total = 0, n = nums.size();
        for(int i=0; i<n; i++){
            while(j < n && nums[j]-nums[i] <= mid) j++;
            j--;
            total += (j-i);
        }
        return (total >= k);
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0;
        int h = nums[n-1] - nums[0];
        if(l == h) return l;

        while(l < h){
            int mid = (l + h)/2;
            if(fun(mid, k, nums)){
                h = mid;
            }
            else{
                l = mid+1;
            }
        }

        return l;
    }
};