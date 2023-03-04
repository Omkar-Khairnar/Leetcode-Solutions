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
 vector<string> ans;
    void TreePaths(TreeNode* root, string str){
      if(root->left == NULL && root->right==NULL){
        ans.push_back(str);
        return;
      }
      str=str+to_string(root->val);
      TreePaths(root->left, str);
      TreePaths(root->right, str);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        TreePaths(root,"");
        return ans;
    }
 
int main(int argc, char const *argv[])
{
  
  return 0;
}