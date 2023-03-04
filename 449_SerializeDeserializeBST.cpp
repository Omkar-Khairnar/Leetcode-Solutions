#include <bits/stdc++.h>
 
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

    string str;
 void makeString(TreeNode* root){
    if(root == NULL){
        str+='*'+'|';
        return;
    }
    else{
        str+=to_string(root->val)+'|';
        makeString(root->left);
        makeString(root->right);
    }
 }
    

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        makeString(root);
        return str;
    }
    int indexVal=0;
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(indexVal == data.length()) return NULL;
        string temp="";
        while(data[indexVal] !='|'){
            temp+=data[indexVal];
            indexVal++;
        }
        indexVal++;
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