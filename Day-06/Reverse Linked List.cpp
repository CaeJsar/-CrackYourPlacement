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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL or head->next==NULL)
            return head;

        ListNode *prev = head;
        ListNode *curr = head->next;
        ListNode* nx = head->next->next;

        while(curr!=NULL){
            curr->next = prev;
            prev = curr;
            curr = nx;
            if(nx!=NULL) nx = nx->next;
        }
        head->next = NULL;
        head = prev;
        return head;
    }
};
