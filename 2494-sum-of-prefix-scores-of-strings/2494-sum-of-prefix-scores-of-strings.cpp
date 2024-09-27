class TrieNode{
public:    
    TrieNode* links[26];
    int freq = 0;
    
    TrieNode(){
        
        for(int i=0; i<26; i++){
            links[i]=NULL;
        }
    }
};
class Trie{
public:
    TrieNode *root;
    Trie(){
        root = new TrieNode();
    }

    void insert(string &temp){
        TrieNode *curr = root;
        for(int i=0; i<temp.size(); i++){
            if(curr->links[temp[i]-'a'] == NULL){
                curr->links[temp[i]-'a'] = new TrieNode();
            }
            curr = curr->links[temp[i]-'a'];
            curr->freq++;
        }
    }

    int getScore(string &temp){
        int score = 0;
        TrieNode *curr = root;
        for(int i=0; i<temp.size(); i++){
            curr = curr->links[temp[i]-'a'];
            score += curr->freq;
        }
        return score;
    }
};
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie trie;
        int n = words.size();
        for(int i=0; i<n; i++){
            trie.insert(words[i]);
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans.push_back(trie.getScore(words[i]));
        }

        return ans;
    }
};