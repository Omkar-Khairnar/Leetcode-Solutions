#include <bits/stdc++.h>
 
using namespace std;
   struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  struct Compare {
    bool operator()(const pair<int, ListNode*>& a, const pair<int, ListNode*>& b) {
            return a.first >= b.first; // compare integers
        
    }
};

   ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int,ListNode*>>, Compare> pq;
        ListNode*temp=new ListNode(-1);
        ListNode*ans=temp;
        for (int i = 0; i < lists.size(); i++)
        {   if(!lists[i]) continue;
            else pq.push( pair<int, ListNode*>(lists[i]->val, lists[i]));
        }

        while (!pq.empty())
        {   
                    ListNode *curr=new ListNode(pq.top().first);
                    temp->next=curr;
                    temp=curr;
                    ListNode*prev=pq.top().second;
                    if(!prev->next){
                        pq.pop();
                    }
                    else{
                        pq.pop();
                        pq.push(pair<int, ListNode*>(prev->next->val, prev->next));
                    } 
        }
        
        return ans->next;
        
    }
 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}