/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0 ;
        ListNode *start = new ListNode(0);
        ListNode *tmp = start;
        head = head->next;
        while(head){
            if(head->val == 0){
                tmp->next = new ListNode(sum);
                sum=0;
                tmp = tmp->next;
            }
            sum += head->val;
            head=head->next;
        }

        return start->next;
    }


};