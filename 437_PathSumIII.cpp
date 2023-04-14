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
  int ct=0;
    vector<int>arr;
    void checkpath(TreeNode*root,  int target){
        if(!root) return;
        
        arr.push_back(root->val);
        checkpath(root->left,target);
        checkpath(root->right,target);
        long long temp=0;
        for(int i=arr.size()-1; i>=0; i--){
            temp+=arr[i];
            if(temp== target) ct++;
        }
        arr.pop_back();

    } 
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>arr;
        checkpath(root,targetSum);
        return ct;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}