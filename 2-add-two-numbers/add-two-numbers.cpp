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
        int c=0;
        ListNode *res=NULL,*temp=NULL,*t=NULL;
        while(l1!=NULL and l2!=NULL)
        {
            int a=l1->val+l2->val;
            int r=a%10;
            int r1=r+c;
            a=a/10;
            if(r1>9)
            {
                c=(r1/10);
                r1=r1%10;
            }
            else
            {
                c=a;
            }
            if(res==NULL)
            {
                res=new ListNode(r1);
                t=res;
            }
            else
            {
                temp=new ListNode(r1);
                t->next=temp;
                t=temp;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {
                int a=l1->val+c;
                int r=a%10;
                temp=new ListNode(r);
                t->next=temp;
                t=temp;
                c=a/10;
                l1=l1->next;
            }
        }
        else
        {
            while(l2!=NULL)
            {
                int a=l2->val+c;
                int r=a%10;
                temp=new ListNode(r);
                t->next=temp;
                t=temp;
                c=a/10;
                l2=l2->next;
            }
        }
        while(c!=0)
        {
            if(c>0 and c<10)
            {
                temp=new ListNode(c);
                t->next=temp;
                t=temp;
                c=0;
            }
            else if(c>9)
            {
                int r=c%10;
                temp=new ListNode(r);
                t->next=temp;
                t=temp;
                c=c/10;
            }
        }
        return res;
    }
};