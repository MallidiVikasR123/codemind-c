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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head,*temp2=temp->next;
        while(temp!=NULL and temp->next!=NULL)
        {
            ListNode* gcdnode=new ListNode(__gcd(temp->val,temp->next->val));
            temp->next=gcdnode;
            gcdnode->next=temp2;
            temp=temp2;
            temp2=temp2->next;
        }
        return head;
    }
};