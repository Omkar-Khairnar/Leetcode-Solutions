class TrieNode
{
    public:
    TrieNode *links[26];
    bool isWordCompleted; 
    int cost;

    TrieNode(){
        isWordCompleted = false; //Initially setting word completed as False (will be true is node contains last char of string);
        for(int i=0; i<26; i++){
            this->links[i]=NULL;
        }
        cost = INT_MAX;
    }
};

class Trie{
    public:
    TrieNode *root;

    //Constructor
    Trie(){
        root = new TrieNode();
    }

    //Return true OR false isWord present in Trie or not.
    int searchWord(string &s){
        TrieNode *curr = root;
        for(int i=0; i<s.size(); i++){
            if(curr->links[s[i]-'a'] == NULL){
                return INT_MIN;
            }
            curr = curr->links[s[i]-'a'];
        }
        if(curr->isWordCompleted){
            return curr->cost;
        }
        return INT_MAX;
    }

    //Inserts Word in Trie
    void insertWord(string &s, int cost){
        TrieNode *curr = root;
        for(int i=0; i<s.size(); i++){
            if(curr->links[s[i]-'a'] == NULL){
                curr->links[s[i]-'a'] = new TrieNode();
            }
            curr = curr->links[s[i]-'a'];
        }
        curr->isWordCompleted=true;
        curr->cost = min(curr->cost, cost);
        
    }

};

class Solution {
public:
    long long fun(int idx, string &target, Trie &trie, vector<int>&dp){
        if(idx == target.size()){
            return 0;
        }
        
        if(dp[idx] != -1) return dp[idx];
        long long ans = INT_MAX;
        TrieNode *curr = trie.root;
        for(int i = idx; i<target.size(); i++){
            char ch = target[i];
            if(curr->links[ch-'a'] == NULL) break;
            curr = curr->links[target[i]-'a'];
            int val = curr->cost;
            if(val != INT_MAX){
                if(val != INT_MAX){
                    ans = min(ans, val + fun(i+1, target, trie, dp));
                }
            }
        }

        return dp[idx] = ans;
    }
    int minimumCost(string target, vector<string>& words, vector<int>& costs) {
        Trie trie;
        int n = target.size();
        vector<int>dp(n+1,-1);
        for(int i=0; i<words.size(); i++){
            trie.insertWord(words[i], costs[i]);
        }

        long long val = fun(0, target, trie, dp);
        if(val >= INT_MAX) return -1;
        return val; 
    }
};