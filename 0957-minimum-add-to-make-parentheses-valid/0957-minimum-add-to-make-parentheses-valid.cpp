class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ct = 0;
        int n = s.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push('(');
                ct++;
            }
            else if(ct <= 0){
                ans++;
            }
            else{
                st.pop();
                ct--;
            }
        }

        return ans+st.size();
    }
};