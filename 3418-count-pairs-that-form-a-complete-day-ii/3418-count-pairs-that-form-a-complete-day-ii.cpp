class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,long long>mp;
        int n = hours.size();
        long long sum=0;
        long long count = 0;
        for(int i=0; i<n; i++){
            count += (hours[i]%24 == 0) ? mp[0] : mp[24 - hours[i]%24];
            mp[hours[i]%24]++;
        }

        return count;
    }
};