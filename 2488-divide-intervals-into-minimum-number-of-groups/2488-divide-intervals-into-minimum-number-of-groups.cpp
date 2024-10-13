class Solution {
public:
    int minGroups(vector<vector<int>>& I) {
        map<int, int>mp;

        for(vector<int>v : I){
            mp[v[0]]++;
            mp[v[1]+1]--;
        }

        int ct = 0;
        int ans = 0;
        for(auto it = mp.begin(); it != mp.end(); it++){
            ct += it->second;
            ans = max(ans, ct);
        }
        return ans;
    }
};