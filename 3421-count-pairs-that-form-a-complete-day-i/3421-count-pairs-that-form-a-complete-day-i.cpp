class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,int>mp;
        int n = hours.size();
        long long sum=0;
        int count = 0;
        for(int i=0; i<n; i++){
            // count += mp[hours[i] % 24];
            count += (hours[i]%24 == 0) ? mp[0] : mp[24 - hours[i]%24];
            mp[hours[i]%24]++;
        }

        return count;
    }
};