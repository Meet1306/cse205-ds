/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        
        int l1=0;
        int l2=0;
        while(t1!=NULL){
            l1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            l2++;
            t2=t2->next;
        }
        cout<<l1<<" "<<l2<<endl;
        int df=abs(l2-l1);
        cout<<df;
        if(l1>l2){
            for(int i=0;i<df;i++){
                headA=headA->next;
            }
        }
        else
        {
            for(int i=0;i<df;i++){
                headB=headB->next;
            }
        }

        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;



    }
};