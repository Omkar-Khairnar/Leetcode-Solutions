#include <bits/stdc++.h>
 
using namespace std;
 
   struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* removeNodes(ListNode* head) {
       vector<int> v;
       while(head!=NULL){
        v.push_back(head->val);
        head=head->next;
       }
       int max=INT_MIN;
       for(int i=v.size()-1; i>=0; i--){
            if(v[i] >= max){
                max=v[i];
            }
            else{
                v[i]=0;
            }
       }
       ListNode *head1=NULL;
       ListNode *temp=new ListNode(0);
       head=temp;
       for (int i = 0; i < v.size(); i++)
       {
            if(v[i] !=0){
                ListNode *ptr=new ListNode(v[i]);
                temp->next=ptr;
                temp=ptr;
            }
       }
       return (!head1)? head1 : head1->next;

    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}