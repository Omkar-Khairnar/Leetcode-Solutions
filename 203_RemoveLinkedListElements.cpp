#include <bits/stdc++.h>
 
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 ListNode* removeElements(ListNode* head, int val) {
    if(! head) return head;
    while(head && head->val==val){
        head=head->next;
    }
    ListNode *prev=NULL;
    ListNode *nx=NULL;
    ListNode* curr=head;

    while(curr != NULL){
        if(curr->val == val){
            nx=curr->next;
            if(nx){
                prev->next=nx;
                curr=nx;
            }
            else prev->next=NULL;
        }
        else{
            prev=curr;
            curr=curr->next;
        }

    }
    return head;
 } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}