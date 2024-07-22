class Solution {
public:
    int maxOperations(string s) {
        int ops = 0;
        int prev = 0;
        int prevIdx = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1' && i - prevIdx > 1){
                ops += prev;
            }
            if(s[i] == '1'){
                prevIdx = i;
                prev++;
            }
        }

        if(s[s.size()-1] == '0') ops+=prev;

        return ops;
    }
};