class Solution {
public:
    int getLastOccurrance(string bigStr, string subStr){
        reverse(bigStr.begin(), bigStr.end());
        reverse(subStr.begin(), subStr.end());
        int n = bigStr.size(), m= subStr.size();
        int i=0, j=0;

        string temp1 = "";
        string temp2 = "";

        while(i<n && j < m){
            temp1 = "";
            temp2 = "";
            while(i < n && bigStr[i] != ' '){
                temp1 += bigStr[i];
                i++;
            }
            while(j < m && subStr[j] != ' '){
                temp2 += subStr[j];
                j++;
            }
            i++, j++;
            if(temp1 != temp2) return -1;
        }
       
        return (j==m+1) ? 0 : -1;
    }
    bool areSentencesSimilar(string s1, string s2) {
        string bigStr = "";
        string subStr = "";

        if(s1.size() > s2.size()){
            bigStr = s1;
            subStr = s2;
        }
        else{
            bigStr = s2;
            subStr = s1;
        }

        if(getLastOccurrance(bigStr, subStr) == 0){
            return true;
        }
       
        stringstream sBig(bigStr);
        stringstream sSub(subStr);
        
        string word;
        vector<string>bigVec;
        vector<string>subVec;
        while(sBig >> word){
            bigVec.push_back(word);
        }
        while(sSub >> word){
            subVec.push_back(word);
        }
        int n = bigVec.size(), m = subVec.size(); 

        int i=0, j=0;
        int ct = 0;
        while(j < m){
            if(i >= n || j>= m) break;
            if(bigVec[i] == subVec[j]){
                i++, j++;
            }
            else{
                ct++;
                while(i<n && bigVec[i] != subVec[j]){
                    i++;
                }
            }
        }
     
        if(ct > 1) return false;
        if(ct == 0) return true;
        if(ct == 1){
            return j == m && i==n;
        }
        

        return true;
    }
};