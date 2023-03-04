#include <bits/stdc++.h>
 
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;
   
    ListNode *l=new ListNode(0);
    ListNode *ptr=new ListNode(0);
    ListNode *prev=new ListNode(0);
     ListNode *ans=new ListNode(0);
     if( head->next->next == nullptr){
         ptr=head->next;
         ptr->next=head;
         head->next=nullptr;
         return ptr;
     } 
    l=head;
    prev=l;
    ans=head->next;

    while ( l != nullptr && l->next !=nullptr)
    {
        if(l->next->next != nullptr){
            ptr=l->next->next;
            prev->next=l->next;
            l->next->next=l;
            l->next=ptr;
            prev=l;
            l=ptr;
            if(l->next !=nullptr) ptr=l->next;
            
        }
        else{
            prev->next=ptr;
            ptr->next=l;
            l->next=nullptr;
           
        }

    }
    
    return ans;  
}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}