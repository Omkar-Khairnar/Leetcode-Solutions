class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        if(n == 1 || n == 2) return false;
        int l = 0, r = 0;

        while(r < n){
            if(!(arr[r]%2)){
                l=r+1;
            }
            if(r-l >= 2) return true;
            r++;
        }

        return false;
    }
};