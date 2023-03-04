#include <bits/stdc++.h>
 
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1 == nullptr) return list2; 
       if(list2 == nullptr) return list1; 
        vector<int> vec;
       while (list1 !=nullptr)
       {
            vec.push_back(list1->val);
            list1=list1->next;
       }
       while (list2 !=nullptr)
       {
            vec.push_back(list2->val);
            list2=list2->next;
       }
       sort(vec.begin(), vec.end());
        ListNode *l= new ListNode();
        ListNode *head= new ListNode();
        head=l;
       for (int i = 0; i < vec.size(); i++)
       {
            ListNode *m= new ListNode(vec[i]);
            l->next=m;
            l=m;
       }
       
       return head->next;
}
 
int main(int argc, char const *argv[])
{
  
  return 0;
}