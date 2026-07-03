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
        int i = 1,j = 1;
        ListNode* cur = headA;
        while(cur->next!=nullptr){
            i++;
            cur = cur->next;
        }
        cur = headB;
        while(cur->next!=nullptr){
            j++;
            cur = cur->next;
        }
        ListNode* p = headA;
        ListNode* q = headB;
        if(i>=j){
            for(int k = 0;k<i-j ;k++){
                p = p->next;
            }
        }else for(int k = 0; k<j-i; k++){
            q = q->next;
        }
        while( p!=nullptr&&q!=nullptr){
            if(p==q){
                return p;
            }else {
                p=p->next ; 
                q=q->next;
            }
        }
        return nullptr;
    }
};