#define ll long long
class TrieNode
{
    public:
    TrieNode *links[26];
    bool isWordCompleted; 

    TrieNode(){
        isWordCompleted = false; //Initially setting word completed as False (will be true is node contains last char of string);
        for(int i=0; i<26; i++){
            this->links[i]=NULL;
        }
    }
};

class Trie{
    public:
    TrieNode *root;

    //Constructor
    Trie(){
        root = new TrieNode();
    }

    //Inserts Word in Trie
    void insertWord(string s){
        TrieNode *curr = root;
        for(int i=0; i<s.size(); i++){
            if(curr->links[s[i]-'a'] == NULL){
                curr->links[s[i]-'a'] = new TrieNode();
            }
            curr = curr->links[s[i]-'a'];
        }
        curr->isWordCompleted=true;
    }

};
class Solution {
public:
    ll fun(int idx, string &target, Trie &trie, vector<int>&dp){
        //base Case
        if(idx == target.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        TrieNode *root = trie.root;
        ll ans = INT_MAX;
        for(int i=idx; i<target.size(); i++){
            root = root->links[target[i]-'a'];
            if(root == NULL){
                break;
            }
            
            ans = min(ans, 1 + fun(i+1, target, trie, dp));
        }

        return dp[idx] = ans;
    }
    int minValidStrings(vector<string>& words, string target) {
        Trie trie;
        int n = target.size();
        vector<int>dp(n,-1);
        for(int i=0; i<words.size(); i++){
            trie.insertWord(words[i]);
        }

        ll ans = fun(0, target, trie, dp);
        return (ans != INT_MAX) ? ans : -1;
    }
};