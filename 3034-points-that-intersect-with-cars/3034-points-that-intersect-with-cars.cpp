class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int ans = 0;
        map<int, int>mp;
        int count = 0;
        for(vector<int>v : nums){
            mp[v[0]]++;
            mp[v[1]]--;
        }
        int prevPoint = 0;
        for(auto it: mp){
            if(count == 0) prevPoint = it.first;
            count += it.second;
            if(count == 0) ans+= it.first - prevPoint+1;
        }
        return ans;
    }
};