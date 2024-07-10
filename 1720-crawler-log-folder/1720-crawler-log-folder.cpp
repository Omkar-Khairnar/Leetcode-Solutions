class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n  = logs.size();
        int ct=0;
        for(string s : logs){
            if(s[1] == '.' && ct>0) ct--;
            else if(s[0] == '.') continue;
            else{
                ct++;
            }
        }

        return ct;
    }
};