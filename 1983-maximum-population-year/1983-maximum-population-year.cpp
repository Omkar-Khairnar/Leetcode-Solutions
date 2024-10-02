class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int, int>mp;
        for(vector<int>v : logs){
            mp[v[0]]++;
            mp[v[1]]--;
        }
        int count = 0;
        int maxi = 0;
        int year = 0;
        for(auto it : mp){
            count += it.second;
            if(count > maxi){
                maxi = count;
                year = it.first;
            }
        }

        return year;
    }
};