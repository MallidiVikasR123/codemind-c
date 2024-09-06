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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        ListNode *prev=head, *curr=head, *prev1=head;
        head=NULL;
        while(curr!=NULL){
            if(m[curr->val]==1){
                curr=curr->next;
                if(head==NULL){
                    prev->next=NULL;
                    prev=curr;
                }
                else{
                    prev->next=curr;
                }
            }
            else{
                if(head==NULL) head=curr;
                prev=curr;
                curr=curr->next;
            }
        }
        return head;

    }
};