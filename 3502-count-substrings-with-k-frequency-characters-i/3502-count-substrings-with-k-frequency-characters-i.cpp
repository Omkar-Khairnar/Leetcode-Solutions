class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.size();
        int ans=0;
        for(int i=0; i<n; i++){
            vector<int>v(26,0);
            int mx = 0;
            for(int j=i; j<n; j++){
                v[s[j]-'a']++;
                mx = max(mx, v[s[j]-'a']);
                if(mx >= k) ans++;
            }
        }

        return ans;
    }
};