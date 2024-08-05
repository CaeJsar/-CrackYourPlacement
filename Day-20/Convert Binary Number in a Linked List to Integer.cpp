/*
 - Solution 2 
 Difficulty : Easy, but not easy to think SC : O(1)
 TC : O(n)   SC: O(1)
 Leetcode: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
*/
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        //vector<int> v;
        ListNode *temp = head;
        int c=0;
        long long int num=0;

        while(temp!=NULL){         
            if(temp!=head){
                num = num*2;
            }
            num = num + (temp->val * 1);
            temp = temp->next;
        }
        
        return num;
    }
};

//--------------------------------------------------------------------------------------------------------------------------
/*
 Solution 1
 - Difficulty : Easy
 - TC : O(n)   SC: O(n)
 
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
