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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL){
            return head;
        }
        
        int sz=1;
        ListNode* temp=head;
        while(temp->next != NULL){
            sz++;
            temp = temp->next;
        }
        // cout<<sz<<endl;
        if(n==sz){
            head=head->next;
            return head;
        }
        sz -= n;
        int s=1;
        temp=head;
        while (s!=sz) {
            temp = temp->next;
            s=s+1;
        }
        if(temp->next==NULL){
            temp->next=NULL;
        }
        else
        temp->next=temp->next->next;

        // if (head->next != NULL) head = head->next->next;
        return head;
    }
};