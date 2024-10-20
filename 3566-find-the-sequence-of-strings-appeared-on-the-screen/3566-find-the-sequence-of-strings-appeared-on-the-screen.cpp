class Solution {
public:
    vector<string> stringSequence(string s) {
        vector<string>ans;
        string temp = "";

        for(int i=0; i<s.size(); i++){
            for(int j=0; j<=(s[i]-'a'); j++){
                string curr = temp + char(j+'a');
                ans.push_back(curr);
            }
            temp += s[i];
        }

        return ans;
    }
};