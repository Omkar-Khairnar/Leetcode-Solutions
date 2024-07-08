class TrieNode
{
    public:
    TrieNode *links[26];
    bool isWordCompleted = false; 
    int cost = INT_MAX;

    TrieNode(){

        for(int i=0; i<26; i++){
            links[i]=NULL;
        }
    }
};


class Solution {
public:
    long long fun(int idx, string &target, TrieNode *root, vector<int>&dp){
        if(idx == target.size()){
            return 0;
        }
        if(dp[idx] != -1) return dp[idx];
        long long ans = INT_MAX;
        TrieNode *curr = root;
        for(int i = idx; i<target.size(); i++){
            char ch = target[i];
            curr = curr->links[target[i]-'a'];
            if(curr){
                if(curr->isWordCompleted){
                    int val = curr->cost;
                    long long nextItr =  fun(i+1, target, root, dp);
                    ans = min(ans, val + nextItr);
                }
            }else break;
        }

        return dp[idx] = ans;
    }
    int minimumCost(string target, vector<string>& words, vector<int>& costs) {
        TrieNode *root = new TrieNode();
        int n = target.size();
        vector<int>dp(n+1,-1);
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            TrieNode *curr = root;
            for(int j=0; j<s.size(); j++){
                if(curr->links[s[j]-'a'] == NULL){
                    curr->links[s[j]-'a'] = new TrieNode();
                }
                curr = curr->links[s[j]-'a'];
            }
            curr->isWordCompleted=true;
            curr->cost = min(curr->cost, costs[i]);
        }

        long long val = fun(0, target, root, dp);
        if(val >= INT_MAX) return -1;
        return val; 
    }
};

