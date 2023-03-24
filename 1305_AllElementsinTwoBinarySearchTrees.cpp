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
   void storeInorder(TreeNode *root, vector<int> &arr){
    if(!root) return;
    storeInorder(root->left,arr);
    arr.push_back(root->val);
    storeInorder(root->right,arr);
  }

  vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        vector<int>ans;

        storeInorder(root1,v1);
        storeInorder(root2,v2);

        int i=0,j=0;
        while(i < v1.size() && j< v2.size()){
            if(v1[i] <= v2[j]){
                ans.push_back(v1[i]);
                i++;
            }
            else{
                ans.push_back(v2[j]);
                j++;
            }
        }
        while(i < v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
        while(j < v2.size()){
            ans.push_back(v2[j]);
            j++;
        }
        return ans;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}