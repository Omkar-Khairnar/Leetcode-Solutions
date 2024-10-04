#define ll long long
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int sum = skill[n-1] + skill[0];
        ll ans = (ll)skill[n-1] * skill[0];
        int l = 1, r = n-2;
        while(l < r){
            if(skill[r] + skill[l] != sum) return -1;
            ans += ((ll)skill[l] * (ll)skill[r]);
            l++, r--;
        }

        return ans;
    }
};