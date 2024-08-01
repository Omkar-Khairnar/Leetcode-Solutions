class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int ct = 0;
        for(int i=0; i<n; i++){
            string temp = details[i].substr(11,13);
            if(temp[0] > '6') ct++;
            else if(temp[0] == '6' && temp[1] > '0') ct++;
        }

        return ct;
    }
};