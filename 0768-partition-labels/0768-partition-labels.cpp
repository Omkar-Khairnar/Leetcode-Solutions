class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>pos(26,-1);
        for(int i=0; i<s.size(); i++){
            pos[s[i]-97] = i; 
        }
        int maxi=-1;
        vector<int>ans;
        for(int i=0; i<s.size(); i++){
            maxi=pos[s[i]-97];
            int idx=i;
            while(idx<maxi){
                maxi=max(maxi, pos[s[idx]-97]);
                idx++;
            }
            ans.push_back(idx-i+1);
            i=idx;
        }

        return ans;
    }
};