class Solution {
public:
    bool isPalindrom(string &s){
        int l=0, r=s.size()-1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }

    int fun(int idx, string &s, vector<int>&dp){
        //base Case
        if(idx == s.size()){
            return 0;
        }

        if(dp[idx] != -1) return dp[idx];

        string temp = "";
        int ans = INT_MAX;
        for(int i=idx; i<s.size(); i++){
            temp += s[i];
            if(isPalindrom(temp)){
                int val = 1 + fun(i+1, s, dp);
                ans = min(ans, val);
            }
        }

        return dp[idx] = ans;
    }

    int minCut(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);

        for(int idx=n-1; idx>=0; idx--){
            string temp = "";
            int ans = INT_MAX;
            for(int i=idx; i<s.size(); i++){
                temp += s[i];
                if(isPalindrom(temp)){
                    int val = 1 + dp[i+1];
                    ans = min(ans, val);
                }
            }

            dp[idx] = ans;
        }
        return dp[0];

    }
};