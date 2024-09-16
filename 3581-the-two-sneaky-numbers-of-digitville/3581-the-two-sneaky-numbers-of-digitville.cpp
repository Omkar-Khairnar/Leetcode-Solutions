class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int u : nums) mp[u]++;
        vector<int>ans;
        for(auto it=mp.begin(); it != mp.end(); it++){
            if(it->second > 1) ans.push_back(it->first);
        }

        return ans;
    }
};