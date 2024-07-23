class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode *temp= NULL;
        ListNode *newhead = NULL;

        if(curr1==NULL)return list2;
        if(curr2==NULL)return list1;
        
        if(curr1->val < curr2->val){
            newhead = curr1;
            curr1 = curr1->next;
            temp = newhead;
        }
        else if (  curr1->val == curr2->val){
            newhead = curr1;
            curr1 = curr1->next;
            newhead->next = curr2;
            curr2 = curr2->next;
            temp = newhead->next;
            
        }
        else if( curr1->val > curr2->val){
            newhead = curr2;
            curr2 = curr2->next;
            temp = newhead;
        }

        while( curr1 != NULL and curr2 != NULL){
            if( curr1->val < curr2->val ){

                temp->next = curr1;
                curr1 = curr1->next;
            }
            else{
                temp->next = curr2;
                curr2 = curr2->next;
            }
            temp = temp->next;
        }
        if(curr1==NULL){
            temp->next = curr2;
        }
        else {
            temp->next = curr1;
        }
        return newhead;
    }
};
