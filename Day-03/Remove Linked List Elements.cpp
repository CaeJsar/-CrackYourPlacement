class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode *first = head;
        ListNode *second = head;

        while(second!=NULL){
            if(second->val==val){
              
                if(second==head){
                    head = head->next;
                    first=head;
                    second = head;
                }
                else{
                    first->next = second->next;
                    second = first->next;
                }
            }
            else{
                first = second;
                second = second->next;
            }
        }
        return head;
    }
};
