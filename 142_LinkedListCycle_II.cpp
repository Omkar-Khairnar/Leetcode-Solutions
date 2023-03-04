#include <bits/stdc++.h>
 
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  }; 
ListNode *detectCycle(ListNode *head) {
      if(head == NULL || head->next ==NULL)  return NULL;
      unordered_set<ListNode*> s;
      while (head !=NULL)
      {
        if(s.find(head) != s.end()){
            return head;
            
        }
        else{
            s.insert(head);
            head=head->next;
        }

      }
      
    return NULL;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}