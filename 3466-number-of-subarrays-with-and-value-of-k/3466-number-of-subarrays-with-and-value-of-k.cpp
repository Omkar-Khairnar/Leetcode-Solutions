#define ll long long 
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>prevAnd;
        ll ans=0;
        for(int i=0; i<n; i++){
            unordered_map<int,int>currAnd;
            for(auto [num, count] : prevAnd){
                currAnd[num&nums[i]] += count;
            }
            currAnd[nums[i]]++;
            ans += currAnd[k];
            prevAnd = currAnd;
        }

        return ans;
    }
};