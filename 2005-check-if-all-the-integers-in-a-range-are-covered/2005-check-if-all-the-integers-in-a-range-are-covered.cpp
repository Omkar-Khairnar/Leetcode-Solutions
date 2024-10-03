class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        map<int,int>mp;
        for(vector<int> v : ranges){
            mp[v[0]]++;
            mp[v[1]+1]--;
        }
        
        int overlap = 0;
        for(int i=1 ; i<= right; i++){
            overlap += mp[i];
            if(i >= left && overlap == 0) return false;
        }

        return true;
    }
};