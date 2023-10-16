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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while( temp!=NULL )
        {
            v.push_back( temp->val );
            temp = temp->next;
        }
        sort( v.begin() ,  v.end() );
        ListNode* ans = new ListNode(-1);
        ListNode* temp1 = ans;
        int n=v.size();
        for(int i=0 ; i<n ; i++ )
        {
            ListNode* newnode = new ListNode( v[i] );
            temp1->next = newnode;
            temp1 = temp1->next;
        }
        return ans->next;
    }
};