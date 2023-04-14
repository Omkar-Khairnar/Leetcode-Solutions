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

    vector<vector<int>>ans;
    void checkpath(TreeNode*root,vector<int>vec, int sum, int target){
        if(!root) return;
        sum+=root->val;
        vec.push_back(root->val);
        if(sum == target && !root->left && !root->right){
            ans.push_back(vec);
            return;
        }
        checkpath(root->left,vec,sum,target);
        checkpath(root->right,vec,sum,target);
    }

  vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        checkpath(root,{},0,targetSum);
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}