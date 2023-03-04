#include <bits/stdc++.h>
 
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  }; 
  bool hasCycle(ListNode *head) {
      if (head == NULL || head->next == NULL) return false;
    
    unordered_set<ListNode*> map;
    while ( head!= NULL)
    {
       if (map.find(head) != map.end())
       {
         return true;
       }
       
       map.insert(head);
       head=head->next;
    }
    return false;
  }
 
int main(int argc, char const *argv[])
{
 
    
  return 0;
}