#include <bits/stdc++.h>
 
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode*temp=head;
        int sz=1;
        while(temp->next){
            temp=temp->next;
            sz++;
        }
        if(k>=sz)k=k%sz;
        if(k==0) return head;

        ListNode*last =temp;
        last->next=head;
        temp=head;

        int pos=sz-k-1;
        while(pos--){
            temp=temp->next;   
        }

        last=temp->next;
        temp->next=NULL;
        return last;
    }
  
int main(int argc, char const *argv[])
{
 
  return 0;
}