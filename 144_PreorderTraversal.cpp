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

 //Iterative Method for Preorder.
 vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode *> st;
    vector<int> ans;
    if(root == NULL) return ans;
    
    TreeNode* curr=root;
    while(curr!=NULL || !st.empty()){
      while(curr !=NULL){
        ans.push_back(curr->val);
        st.push(curr);
        curr=curr->left;
      }

      curr=st.top(); 
      st.pop();
      curr=curr->right;
    }
    return ans;
 }

 //Iterative Method for Preorder.
 vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode *> st;
    vector<int> ans;
    if(root == NULL) return ans;
    
    TreeNode* curr=root;
    while(curr!=NULL || !st.empty()){
      while(curr !=NULL){
       ans.push_back(curr->val);
       if(curr->right) st.push(curr->right);
       curr=curr->left;
      }

      if(!st.empty()){
        curr=st.top();
        st.pop();
      }
    }
    return ans;
 }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}