class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()%2 == 0 && nums2.size()%2 == 0){
            return 0;
        }
        else if(nums1.size() % 2 == 0){
            int ans = 0;
            for(int u : nums1) ans ^= u;
            return ans;
        }
        else if(nums2.size() % 2 == 0){
            int ans = 0;
            for(int u : nums2) ans ^= u;
            return ans;
        }
        else{
            int ans = 0;
            for(int u : nums1) ans ^= u;
            for(int u : nums2) ans ^= u;
            return ans;
        }
    }
};