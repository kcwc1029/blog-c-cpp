class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode *pA = headA;
            ListNode *pB = headB;
            while(pA != pB){
                if(pA!=nullptr)pA = pA->next;
                else pA = headB;
                if(pB!=nullptr)pB = pB->next;
                else pB = headA;
            }
            return pA;
        }
    };