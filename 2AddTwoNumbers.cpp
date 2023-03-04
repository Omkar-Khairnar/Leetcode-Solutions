#include <bits/stdc++.h>
 
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 // 5 6 4 =465
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int val=1; bool check=false;
    ListNode *l= new ListNode();
    ListNode *head= new ListNode();
    head=l;


        while (l1 != nullptr && l2 != nullptr )
        {   val=l1->val + l2->val+ check;

            
            ListNode *ptr= new ListNode(val % 10 );
                l->next=ptr;
                l=ptr;
                check=false;
            
            if(val>=10) {
                check=true;
            }
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1 != nullptr){
             val=l1->val +check;
             ListNode *ptr= new ListNode(val % 10 );
             if(val>=10) {check=true;}
             else{ check = false;}
            l->next=ptr;
            l=ptr;
             l1=l1->next;
        }
        while(l2 != nullptr){
             val=l2->val +check;
             ListNode *ptr= new ListNode(val % 10 );
             if(val>=10) {check=true;}
             else{ check = false;}
            l->next=ptr;
            l=ptr;
            l2=l2->next;
        }
        if(check){
             ListNode *ptr= new ListNode(1);
            l->next=ptr;
            l=ptr;
        }

      
      return head->next;

  }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}