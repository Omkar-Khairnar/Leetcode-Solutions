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
    TreeNode* ans=NULL;
 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if((root->val>=p->val && root->val<=q->val) || (root->val<=p->val && root->val>=q->val) ){
            ans=root;
        }
        if(p->val< root->val && q->val< root->val){
            lowestCommonAncestor(root->left, p,q);
        }
        else if(p->val > root->val && q->val> root->val){
            lowestCommonAncestor(root->right, p,q);
        }

        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}