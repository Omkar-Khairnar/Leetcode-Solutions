class TrieNode{
public:
    vector<TrieNode*>links;
    
    TrieNode(){
        links.resize(10);
        for(int i=0; i<10; i++){
            links[i] = NULL;
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
            if(curr->links[temp[i]-'0'] == NULL){
                curr->links[temp[i]-'0'] = new TrieNode();
            }
            curr = curr->links[temp[i]-'0'];
        }
       
    }
    int checkPrefix(string &temp){
        TrieNode *curr = root;
        int CP = 0;
        for(int i=0; i<temp.size(); i++){
            if(curr->links[temp[i]-'0'] == NULL){
                return CP;
            }
            CP++;
            curr = curr->links[temp[i]-'0'];
        }
        return CP;
    }
};

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie *trie = new Trie();
        string temp;
        for(int i=0; i<arr1.size(); i++){
            temp = to_string(arr1[i]);
            trie->insert(temp);
        }
        int maxi = 0;
        for(int i=0; i<arr2.size(); i++){
            temp = to_string(arr2[i]);
            maxi = max(maxi, trie->checkPrefix(temp));
        }

        return maxi;
    }
};