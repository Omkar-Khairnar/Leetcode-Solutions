class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        int n = power.size();
        vector<long long>temp;
        unordered_map<int,int>freq;

        sort(power.begin(), power.end());

        temp.push_back(power[0]);
        freq[power[0]]++;
        for(int i=1; i<n; i++){
            if(power[i] != power[i-1]){
                temp.push_back(power[i]);
            }
            freq[power[i]]++;
        }

        unordered_map<int,long long>dp;
        dp[temp[0]] = temp[0]*freq[temp[0]];
        for(int i=1; i<temp.size(); i++){
            
            long long notTake = dp[temp[i-1]];
            int ind = lower_bound(temp.begin(), temp.end(), temp[i]-2) - temp.begin();
            ind--; //Bcoz lower_bound gives index of value greater than or equal to x, here we want index of value lower than x;
            long long take = temp[i]*freq[temp[i]] + (ind < 0 ? 0 : dp[temp[ind]]);

            dp[temp[i]] = max(notTake, take);
        }
        
        return dp[temp[temp.size()-1]];
    }
};