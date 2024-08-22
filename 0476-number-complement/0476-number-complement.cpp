class Solution {
public:
    int findComplement(int num) {
        string s = "";
        while(num){
            if(num & 1){
                s += '0';
            }
            else s += '1';
            num >>= 1;
        }
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            ans += (s[i]-48)*pow(2,i);
        }

        return ans;
    }
};