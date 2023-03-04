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

 int preindex=0;
    TreeNode* constructBT(vector<int> &preorder, map<int,int> &inorder, int le,int re){
    if(le > re) return NULL;

    TreeNode *root=new TreeNode(preorder[preindex++]);
    auto it=inorder.find(root->val);
    int index=it->second;
    cout<<index<<endl;

    root->left=constructBT(preorder,inorder,le,index-1);
    root->right=constructBT(preorder,inorder,index+1,re);
    return  root; 
   } 
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        map<int, int>inorder;
        vector<int> vec;
        for(auto i: preorder){
            vec.push_back(i);
        }
        sort(vec.begin(), vec.end());
        for(int i=0; i<vec.size(); i++){
            inorder.insert({vec[i],i});
        }
        return constructBT(preorder, inorder, 0,preorder.size()-1);
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}