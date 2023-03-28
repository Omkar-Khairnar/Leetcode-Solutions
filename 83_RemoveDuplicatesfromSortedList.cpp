#include <bits/stdc++.h>
 
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* deleteDuplicates(ListNode* head) {
    if(!head) return NULL;
        ListNode *h=head;
        ListNode *temp=head->next;
        if(!temp) return head;

        while(h !=NULL){
            while(h->val == temp->val){
                temp=temp->next;
            }

            h->next=temp;
            h=temp;
            if(h) temp=h->next;
        }
        return head;

    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}