class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        while(a>0 || b>0 || c>0){
            if((c&1) == 0){
                if(a&1 == 1) count++;
                if(b&1 == 1) count++;
            }
            else{
                if(!(a&1) && !(b&1)) count++;
            }
            c >>=1;
            a >>=1;
            b >>=1;
        }

        return count;
    }
};