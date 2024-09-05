#define ll long long
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        ll sum = accumulate(rolls.begin(), rolls.end(), 0);
        ll totalSum = (ll)mean * (m+n);
        ll target = totalSum - sum;

        if(target < n || target > n*6) return {};

        vector<int>ans(n,1);
        target -= n;
        int idx = 0, val = 5;
        while(target > 0){
            if(target >= val){
                target -= val;
                ans[idx] += val;
                idx++;
            }
            else{
                val = target;
            }
        }
        return ans;
    }
};