class Solution {
public:
    bool doesAliceWin(string s) {
        int ct = 0;
        for(char ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        }

        return false;
    }
};