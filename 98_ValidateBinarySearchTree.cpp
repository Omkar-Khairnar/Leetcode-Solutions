#include <bits/stdc++.h>
 
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

        //Correct Solution but not efficient
// vector<int>vec; int index=0;bool ans=true;
// void inorder(TreeNode *root){
//     if(!root) return;
//     inorder(root->left);
//     if(index && vec[index-1] >= root->val){
//         ans=false;
//         return;
//     }else{
//         vec.push_back(root->val); index++;
//     }
//     inorder(root->right);
// }

// bool isValidBST(TreeNode* root) {
//      inorder(root);
//      return ans; 
// } 


        //Efficient Solution.
    bool isValidBST(TreeNode* root) {
        
        return check(root, LONG_MIN, LONG_MAX);
    }

    bool check(TreeNode* root, long minval, long maxval ){

        if(root==NULL) return true;

        if(root->val >= maxval || root->val <= minval) return false;

        return check(root->left,minval, root->val) && check(root->right, root->val, maxval);
        
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}