class Solution {
public:
    void fillLPS(vector<int>& lps, string& pat) {
        lps[0] = 0;
        int i = 1, len = 0;
        int n = pat.size();

        while (i < n) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len == 0) {
                    lps[i] = 0;
                    i++;
                } else {
                    len = lps[len - 1];
                }
            }
        }
    }
    int search(string pat, string txt) {
        vector<int> lps(pat.size(), 0);
        // Filling LPS array using the function
        fillLPS(lps, pat);
        int maxLength = 0;
        int n = txt.size();

        int i = 0, j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
            }
            if(i == n){
                maxLength = j;
            }
            if (j == pat.size()) {
                j = lps[j - 1];
            } else if (i < n && txt[i] != pat[j]) {
                if (j == 0)
                    i++;
                else
                    j = lps[j - 1];
            }
        }

        return maxLength;
    }
    string shortestPalindrome(string s) {
        int n = s.size();
        if(n == 0) return s;
        string pat = s;
        string txt = s;
        reverse(txt.begin(), txt.end());

        int len = search(pat, txt);

        string rem = (len <= n) ?  s.substr(len) : "";
        reverse(rem.begin(), rem.end());

        return rem+s;
    }
};