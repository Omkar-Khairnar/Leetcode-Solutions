#define ll long long 
class Solution {
public:
    ll fun(int curr, int copiedLast, int n){
        if(curr == n) return 0;

        ll ans = INT_MAX;
        if(copiedLast > 0 && curr + copiedLast <= n){
            ans = min(ans, 1+fun(curr+copiedLast, copiedLast, n));
        }
        if(curr + curr <= n && curr != copiedLast){
            ans = min(ans, 1+fun(curr, curr, n));
        }

        return ans;
    }
    int minSteps(int n) {
        
        int ans = fun(1, 0, n);
        return ans;
    }
};