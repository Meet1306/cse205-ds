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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dum=new ListNode(-1);
        ListNode* temp=dum;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sm=0;
            if(l1!=NULL){
                sm+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sm+=l2->val;
                l2=l2->next;
            }
            sm+=carry;
            carry=sm/10;
            ListNode* n=new ListNode(sm%10);
            temp->next=n;
            temp=temp->next;
        }
        return dum->next;
    }
};