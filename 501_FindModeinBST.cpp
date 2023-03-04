#include <bits/stdc++.h>
 
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 }; 

 map<int, int> mp;

 void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    mp[root->val]++;
    inorder(root->right);
 }

  vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int> ans;
        int mx=-1;

        for(auto it=mp.begin(); it!=mp.end(); it++){
            mx=max(mx,it->second);
        }
        for(auto it=mp.begin(); it!=mp.end(); it++){
           if(it->second ==mx){
            ans.push_back(it->first);
           }
        }
    return ans;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}