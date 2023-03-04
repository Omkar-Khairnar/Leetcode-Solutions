#include <bits/stdc++.h>
 
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 }; 
 
  // Solution with O(n) time and O(n) space
  // bool isPalindrome(ListNode* head) {
  //     stack<int> st;
  //     queue<int> qu;

  //     while (head != NULL)
  //     {
  //       st.push(head->val);
  //       qu.push(head->val);
  //       head=head->next;
  //     }

  //     while (!st.empty())
  //     {
  //         if(st.top() != qu.front()){
  //           return false;
  //         }
  //         else{
  //           st.pop(); qu.pop(); 
  //         }
  //     }
      
  //    return true; 
  // }


  //Solution with Time :O(n) and space O(1)--> Basically we are reversing half of the list and checking the value;
   bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        while (slow)
            if (fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        return true;
    }

int main(int argc, char const *argv[])
{
  stack<int> st;
  for(int i=1; i<10; ){
    st.push(i);
    i++;
  }
  // cout<<st.top()+2<<endl;
  if(st.top()==9){
    cout<<"sxs"<<endl;
  }
 
  return 0;
}