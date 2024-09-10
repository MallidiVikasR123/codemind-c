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
        ListNode *temp,*curr=head,*prev;
        while(curr!=NULL and curr->next!=NULL){
            prev=curr;
            curr=curr->next;
            int num=gcd(prev->val,curr->val);
            temp=new ListNode(num);
            prev->next=temp;
            temp->next=curr;
        }
        return head;
    }
    int gcd(int a,int b){
        int c=min(a,b);
        while(c){
            if(a%c==0 and b%c==0) return c;
            c--;
        }
        return 1;
    }
};