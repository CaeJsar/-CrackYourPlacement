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
    int getDecimalValue(ListNode* head) {
        
        vector<int> v;
        ListNode *temp = head;
        int c=0;
        long long int num=0;

        while(temp!=NULL){
            v.push_back(temp->val);
            c++;
            temp = temp->next;
        }
        c--;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                num = num + ( v[i] * pow(2,c) );
            }
            c--;
        }
        return num;
    }
};
