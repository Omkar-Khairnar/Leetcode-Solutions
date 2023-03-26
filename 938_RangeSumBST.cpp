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
   int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return sum;
        if(root->val >= low && root->val <=high){
            sum+=root->val;
            rangeSumBST(root->left,low,high);
            rangeSumBST(root->right,low,high);
        }
        else if(root->val > high){
            root->right=NULL;
            rangeSumBST(root->left,low,high);
        }
        else{
            root->left=NULL;
            rangeSumBST(root->right,low,high);
        }
        return sum;
    }
 
int main(int argc, char const *argv[])
{
    
 
  return 0;
}