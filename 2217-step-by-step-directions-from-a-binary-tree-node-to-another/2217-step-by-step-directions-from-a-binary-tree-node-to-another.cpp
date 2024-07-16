/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//APPROACH 1 : BY COVERTING INTO GRAPH
    // void fun(TreeNode *root, unordered_map<int, vector<pair<string, int>>>&adj){
    //     if(!root) return;
    //     if(root->right){
    //         adj[root->val].push_back({"R",root->right->val});
    //         adj[root->right->val].push_back({"U",root->val});
    //     }
    //     if(root->left){
    //         adj[root->val].push_back({"L",root->left->val});
    //         adj[root->left->val].push_back({"U",root->val});
    //     }

    //     fun(root->left, adj);
    //     fun(root->right, adj);
    // }
    // string getDirections(TreeNode* root, int startValue, int destValue) {
    //     unordered_map<int,vector<pair<string,int>>>adj;
    //     fun(root, adj);
    //     unordered_map<int,int>vis;
    //     queue<pair<string,int>>q;
    //     q.push({"", startValue});
    //     vis[startValue] = 1;
    //     string temp="";
    //     int node = 0;

    //     while(!q.empty()){
    //         node = q.front().second;
    //         temp = q.front().first;
    //         q.pop();
    //         if(node == destValue) return temp;
    //         for(auto pr : adj[node]){
    //             if(vis[pr.second] == 0){
    //                 q.push({temp+pr.first, pr.second});
    //                 vis[pr.second] = 1;
    //             }
    //         }
    //     }
    //     return "";
    // }

//APPROACH 2: BY FINDING LOWEST COMMON ANCESTOR
    string startString = "";
    string destString = "";
    
    void preorder(TreeNode *root, int start, int dest, string &temp){
        if(!root || (startString != "" && destString != "")) return;
        if(root->val == start){
            startString = temp;
        }
        else if(root->val == dest){
            destString = temp;
        }

        temp += "L";
        preorder(root->left, start, dest, temp);
        temp.pop_back();
        temp += "R";
        preorder(root->right, start, dest, temp);
        temp.pop_back();
    }
    string getDirections(TreeNode* root, int start, int dest) {
        string temp = "P";
        preorder(root, start, dest, temp);

        int idx = 0;
        // cout<<startString<<" "<<destString<<endl;
        while(startString[idx] == destString[idx]) idx++;
        // cout<<idx;
        if(idx == startString.size()) return destString.substr(idx);
        if(idx == destString.size()){
            string ans ="";
            while(idx != startString.size()){
                ans += "U";
                idx++;
            }
            return ans;
        }
       
        for(int i=0; i<startString.size(); i++){
            startString[i] = 'U';
        }

        return startString.substr(idx) + destString.substr(idx);
    }    
};