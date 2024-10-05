class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>A(26,0);
        vector<int>B(26,0);
        for(int i=0; i<s1.size(); i++){
            A[s1[i]-'a']++;
        }
        
        int n = s2.size();
        int l=0, r=0;
        while(r < n){
            if(r-l == s1.size()) return true;
            if(A[s2[r] - 'a'] == 0){
                l = r + 1;
                r = l;
                for(int i=0; i<26; i++) B[i]=0;
            }
            else if(B[s2[r] - 'a'] + 1 > A[s2[r] - 'a']){
                B[s2[r] - 'a']++;
                int ch = s2[r] ;
                do{
                    B[s2[l]-'a']--;   
                }while(s2[l++] != ch);
                r++;
            }
            else{
                B[s2[r] - 'a']++;
                r++;
            }
        }
        if(r-l == s1.size()) return true;

        return false;
    }
};













