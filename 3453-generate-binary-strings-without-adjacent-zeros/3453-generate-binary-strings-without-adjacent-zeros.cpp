class Solution {
public:
    vector<string> ans;
    void fun(int idx,  string s,  int prevOne, int n){
        if(s.size() == n){
            ans.push_back(s);
            return;
        }
        
        if(idx - prevOne <= 1){
            fun(idx+1, s+'0', prevOne, n);
            fun(idx+1, s+'1', idx, n);
        }
        else{
            fun(idx+1, s+'1', idx, n);
        }
    }
    vector<string> validStrings(int n) {
        string s = "";
        fun(0, s, -1, n);
        return ans;
    }
};