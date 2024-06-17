class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int>ans;
        int m = potions.size();
        for(int i=0; i<spells.size(); i++){
            int a = spells[i];
            double k = (double)success/a;
            long long target = ceil(k);
            int ind = lower_bound(potions.begin(), potions.end(), target) - potions.begin();
            ans.push_back(m-ind);
        }
        return ans;
    }
};