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

    int sum=0;
    void helper(TreeNode*root, char ch){
        if(!root) return;
        else if(ch =='l' && !root->left && !root->right){
            sum+=root->val;
            return;
        }
        else if(ch =='r' && !root->left && !root->right){
            return;
        }
        helper(root->left,'l');
        helper(root->right,'r');  
    } 
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root->left, 'l');
        helper(root->right, 'r');
        return sum;
    }
 
int main(int argc, char const *argv[])
{
    
  return 0;
}