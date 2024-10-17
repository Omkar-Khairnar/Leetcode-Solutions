class Solution {
public:
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
        int n = subVec.size(), m = bigVec.size(); 

        int l1 = 0, r1 = n-1;
        int l2 = 0, r2 = m-1;

        while(l1 <= r1){
            while(l1 < n && subVec[l1] == bigVec[l2]){
                l1++, l2++;
            }
            while(r1 >=0 && subVec[r1] == bigVec[r2]){
                r1--, r2--;
            }
            if(l1 == n || r1 == -1 || (l1 > r1)) return true;
            return false;

        }

        return false;

    }
};



