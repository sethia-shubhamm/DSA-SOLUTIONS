// Problem: 83. Remove Duplicates from Sorted List
// Difficulty: Easy
// Language: C++
// Date: 2025-12-31
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/1870088794/

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        if (!head) return head;

public:
        while (curr->next != NULL) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};

