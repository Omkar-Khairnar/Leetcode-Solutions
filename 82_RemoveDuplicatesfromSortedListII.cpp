#include <bits/stdc++.h>
 
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
//  ListNode* deleteDuplicates(ListNode* head) {
//     map<int,int> mp;
//        while(head){
//             mp[head->val]++;
//             head=head->next;
//        }
//        ListNode *anshead=new ListNode(0);
//        ListNode *ans=anshead;
//        for(auto it=mp.begin(); it!=mp.end(); it++){
//             if(it->second == 1){
//                 anshead->next=new ListNode(it->first);
//                 anshead=anshead->next;
//             }
//        }
//        return ans->next;
//     }
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode*temp=head;
    // int val=temp->val;
    // temp=temp->next;
    // while(temp){
    //   if(val == temp->val){
    //     temp->val=101;
    //     temp=temp->next;
    //   }
    //   else{
    //     val=temp->val;
    //     temp=temp->next;
    //   }
    // }
  }
int main(int argc, char const *argv[])
{
 
  return 0;
}