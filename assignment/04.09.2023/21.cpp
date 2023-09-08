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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
  {
		ListNode* dummy=new ListNode(-1);
		ListNode* p3=dummy;
		ListNode* p1=l1;
		ListNode* p2=l2;
		while(p2!=NULL && p1!=NULL){
			if(p1->val<p2->val){
				p3->next=p1;
				p1=p1->next;
			}
			else
			{
				p3->next=p2;
				p2=p2->next;		
			}
			p3=p3->next;
		}
		if(p1!=NULL){
			p3->next=p1;
			// p1=p1->next;
			// p3=p3->next;
		}
		if(p2!=NULL){
			p3->next=p2;
			// p2=p2->next;
			// p3=p3->next;
		}
		dummy=dummy->next;
		return dummy;
	}
};	