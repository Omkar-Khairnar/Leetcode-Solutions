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

vector<int>vec;
void inorder(TreeNode *root){
     if(!root) return;
     inorder(root->left);
     vec.push_back(root->val);
     inorder(root->right);
}

TreeNode *structBalancedBST(int low, int high){
    int mid=(low+high)/2;
    if(low == high){
        return new TreeNode(vec[low]);
    }
    else if(low > high) return  NULL;
    TreeNode *root=new TreeNode(vec[mid]);
    root->left=structBalancedBST(low,mid-1);
    root->right=structBalancedBST(mid+1, high);
    return root;
}

TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        int high=vec.size()-1;
        TreeNode *ans=structBalancedBST(0,high);
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}