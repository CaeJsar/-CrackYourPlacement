/*
 - difficulty : Easy-Medium, easy for SC:O(n)
 - Leetcode : https://leetcode.com/problems/palindrome-linked-list/
 
*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head==NULL or head->next==NULL)return true;

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *p = NULL;

        while(fast and fast->next){

            fast = fast->next->next;

            ListNode *temp = slow->next;
            slow->next = p;
            p = slow;
            slow = temp;
        }

        if(fast)slow = slow->next;

        while(p and slow){
            if(p->val!=slow->val){
                return false;
            }
            p = p->next;
            slow = slow->next;
        }

        return true;
        
    }
};
