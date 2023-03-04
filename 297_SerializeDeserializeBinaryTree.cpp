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
 string str;
 //vector<int>arr;
 void makeString(TreeNode* root){
    if(root == NULL){
        //arr.push_back(-1001);
        str+='*'+'|';
        return;
    }
    else{
        str+=to_string(root->val)+'|';
       // arr.push_back(root->val);
        makeString(root->left);
        makeString(root->right);
    }
 }
    
// Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        makeString(root);
        return str;
    }

    int index=0;
   
// Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
      if(index == data.length()) return NULL;
        string temp="";
        while(data[index] !='|'){
            temp+=data[index];
            index++;
        }
        index++;
        if(temp == "*") return NULL;
        int n=stoi(temp);
        TreeNode *root =new TreeNode(n);
        root->left=deserialize(data);
        root->right=deserialize(data);

        return root;
    
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}