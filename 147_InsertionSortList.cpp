#include <bits/stdc++.h>
 
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };    
ListNode* insertionSortList(ListNode* head) {
     vector<int> vec;
     while (head != nullptr)
     {
        vec.push_back(head->val);
        head=head->next;
     }
     sort(vec.begin(), vec.end());
     for(auto it :vec){
        cout<<it<<endl;
     }
     ListNode * l=new ListNode();
     ListNode * point=new ListNode();
     point =l;
     for(auto it :vec){
        ListNode * ch=new ListNode(it);
        l->next=ch;
        l=ch;
     }
      return point->next;  
}    
 
int main(int argc, char const *argv[])
{
 
  return 0;
}