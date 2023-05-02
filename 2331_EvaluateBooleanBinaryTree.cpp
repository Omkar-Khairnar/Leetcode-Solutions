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

  
     bool evaluateTree(TreeNode* root) {
        
        if(root->val == 0) return false;
        else if(root->val ==1) return true;
        else if(root->val==2){
            root->val=evaluateTree(root->left) || evaluateTree(root->right);
        }
        else if(root->val==3){
            root->val=evaluateTree(root->left) && evaluateTree(root->right);
        }

        return root->val;
    }

 
int main(int argc, char const *argv[])
{
 
  return 0;
}