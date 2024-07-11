class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] ==')'){
                string temp="";
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                for(char u: temp) st.push(u);
            }
            else{
               st.push(s[i]);
            }
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};