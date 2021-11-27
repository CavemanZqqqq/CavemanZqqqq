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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* h = head;
        ListNode* t = h;
        if(head == nullptr) {
            return 0;
        }
        while(h->next) {
            t = h->next;
            if(t->val == h->val) {
                t = t->next;
                h->next = t;
            }else{
                h = t;
            }
        }
        return head;
    }
};
