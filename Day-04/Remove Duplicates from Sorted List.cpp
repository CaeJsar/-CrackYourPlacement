class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL or head->next==NULL)return head;

        ListNode* first = head;
        ListNode * second = head->next;

        while(second!=NULL){

            if(first->val == second->val){
                first->next = second->next;
                second = first->next;
            }

            else{
                first = second;
                second = second->next;
            }
        }
        return head;
    }
};
