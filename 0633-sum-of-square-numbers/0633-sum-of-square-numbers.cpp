class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long a=0; a*a<=c; a++){
            long long k = c - a*a;
            double b = sqrt(k);
            if(b == (int)b) return true;
        }

        return false;
    }
};