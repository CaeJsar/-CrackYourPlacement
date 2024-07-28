class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        map<ListNode*,int> m;

        ListNode *temp = headA;
        ListNode *t2=NULL;
        //int i=1;

        while(temp!=NULL){
            m.insert(make_pair(temp,temp->val));
            temp = temp->next;
        }

        temp=headB;

        while(temp!=NULL){
            if(m.find(temp)!=m.end()){
                return temp;
            }
            temp = temp->next;
        }
        return t2;

    }
};
