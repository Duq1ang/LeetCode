#ifndef 160__INTERSECTION_OF_TWO_LINKED_LISTS_H_INCLUDED
#define 160__INTERSECTION_OF_TWO_LINKED_LISTS_H_INCLUDED

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
    int listLength(ListNode *head){
        int length=0;
        while(head){
            ++length;
            head=head->next;
        }
        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
            return NULL;
        ListNode *p=headA;
        ListNode *q=headB;
        int cur=listLength(headA)-listLength(headB);
        if(cur>0){
            for(int i=0;i<cur;i++)
                p=p->next;
        }
        if(cur<0){
            cur=-cur;
            for(int i=0;i<cur;i++)
                q=q->next;
        }
        while(q){
            if(q==p)
                return q;
            q=q->next;
            p=p->next;
        }
        return NULL;
    }
};
#endif // 160__INTERSECTION_OF_TWO_LINKED_LISTS_H_INCLUDED
