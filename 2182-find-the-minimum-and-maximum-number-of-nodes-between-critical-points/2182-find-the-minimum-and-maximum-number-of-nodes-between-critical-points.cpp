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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev = head;
        ListNode *curr = head->next;
        ListNode *nxt = head->next->next;

        if(!curr || !nxt) return {-1,-1};
        int mini = INT_MAX;
        int prevIdx = 0;
        int currIdx = 0;
        int firstIdx = -1;
        int idx = 2, count=0;
        while(nxt){
            if((curr->val > nxt->val && curr->val > prev->val) || (curr->val < nxt->val && curr->val < prev->val)){
                if(prevIdx != 0) mini = min(mini, idx-prevIdx);
                currIdx = idx;
                prevIdx = currIdx;
                if(firstIdx == -1) firstIdx = idx;
                count++;
            }
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            idx++;
        }

        if(count < 2) return {-1,-1};
        return {mini, currIdx-firstIdx};
    }
};