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
       // k op
    int kop(ListNode* head, int k) {
        int i = 0;
        ListNode* j = head;
        while (j) {
            ++i;
            j = j->next;
        }
        int x = k%i;
        return x;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        //note0
        if (head == nullptr || head->next == nullptr ) {
            return head;
        }
        
        int x = kop(head, k);
            
        for (int i = 0; i < x; ++i) {
            ListNode* h = rotate(head);
            head = h;
        }
        return head;
    }
    
        //rotate one time
    ListNode* rotate(ListNode* head) {
        //int
        ListNode* t = head;
        while (t->next->next) {
            t = t->next;
        }
        t->next->next = head;
  
        head = t->next;
      
        t->next = nullptr;
        return head;
        


    }
};
