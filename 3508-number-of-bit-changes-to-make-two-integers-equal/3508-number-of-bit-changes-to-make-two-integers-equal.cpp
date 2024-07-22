class Solution {
public:
    int minChanges(int n, int k) {
        if(k > n) return -1;
        int ops = 0;

        while(n){
            if(!(n&1) && (k&1)) return -1;
            if((n&1) && !(k&1)) ops++;
            n >>= 1;
            k >>= 1;
        }

        return ops;
    }
};