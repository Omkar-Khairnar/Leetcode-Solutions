#include <bits/stdc++.h>
 
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  }; 

ListNode* reverseList(ListNode* head) {
    if(head == NULL || head->next == NULL ) return head;
   ListNode *prev=NULL;
   ListNode *curr=head;
   ListNode *nxt=head->next; 
   while(prev != curr){
    curr->next=prev;
    prev=curr;
    curr=nxt;
    if(nxt->next)nxt=nxt->next;
   }
  return prev;

}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}