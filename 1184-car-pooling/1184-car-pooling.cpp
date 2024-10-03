class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int>mp;
        for(vector<int> v : trips){
            mp[v[1]] += v[0]; 
            mp[v[2]] -= v[0]; 
        }

        auto it = mp.begin();
        auto kt = it;
        it++;
        if(kt->second > capacity) return false;

        for(it; it != mp.end(); it++, kt++){
            it->second += kt->second;
            if(it->second > capacity) return false;
        }

        return true;
    }
};