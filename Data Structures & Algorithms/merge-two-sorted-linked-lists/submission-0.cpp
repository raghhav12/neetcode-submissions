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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode();
        ListNode* curr = temp;
        ListNode* head = list1;
        ListNode* tail = list2;

        while (head && tail) {
            if (head->val <= tail->val) {
                curr -> next = head;
                head = head->next;
            } else {
                curr->next = tail;
                tail = tail->next;
            }
            curr = curr -> next;
        }
        if (head) {
            curr -> next = head;
            curr = curr -> next;
        }
        
        if (tail) {
            curr -> next = tail;
            curr = curr -> next;
        }
        return temp -> next;
    }
};
