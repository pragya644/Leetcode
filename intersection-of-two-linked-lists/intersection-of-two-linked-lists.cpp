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
        int count1=0, count2=0 ; 
        for(ListNode *temp = headA ; temp!=NULL; temp= temp->next)
            count1++;
        for(ListNode *temp = headB ; temp!=NULL; temp= temp->next)
            count2++;
        int d = abs(count1-count2);
        if(count1>count2)
        {
            for(int i=0; i<d; i++)
            {
                if(headA==NULL)
                    return NULL;
                headA = headA->next;
            }
        }
        else
        {
            for(int i=0; i<d; i++)
            {
                if(headB==NULL)
                    return NULL;
                headB = headB->next;
            }
        }
        while(headA!=NULL && headB!=NULL)
        {
            if(headA==headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
    
};
