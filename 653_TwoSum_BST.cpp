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
//     map<int, int>mp; 
//     int val=0;
//     bool ans=false;
//  void inorder(TreeNode *root , int k){
//     if(!root) return;
//     inorder(root->left, k);
//     val=root->val;
//     if(mp.count(k-val) >0){
//         ans=true; return;
//     }
//     else{
//         mp[val]=0;
//     }
//     inorder(root->right,k);
//  }
//  bool findTarget(TreeNode* root, int k) {
//        inorder(root,k);
//        return ans; 
//     }




    //Two Pointer Method
    vector<int> nums;
    void inorder(TreeNode *root){
        if(!root) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
 bool findTarget(TreeNode* root, int k) {
    inorder(root);
    int sz=nums.size();

    int st=0, lt=sz-1, sum=0;
    while(st <=lt){
        sum=nums[st] +nums[lt];
        if( sum== k) return true;
        else if(sum > k) lt--;
        else st++;
    }
    return false;
 }



 
int main(int argc, char const *argv[])
{
 
  return 0;
}