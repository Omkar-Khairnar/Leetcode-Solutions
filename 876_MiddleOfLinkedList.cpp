#include <bits/stdc++.h>
 
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  }; 
  ListNode* middleNode(ListNode* head) {
    ListNode *h1=new ListNode();
    h1=head;
    int ct=0;
    while (h1!= NULL)
    {
        ct++;
        h1=h1->next;
    }
    if (ct == 1) return head;
    if (ct == 2) return head->next;
    int n=1;
    while (n != (ct+2)/2)
    {
       n++;
       head=head->next;
    }
    
    return head;       
  }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}