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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};

// Short Thought Process: To find the middle of a linked list, we can use the two-pointer technique. We initialize two pointers, 'slow' and 'fast', both starting at the head of the list. The 'fast' pointer moves two steps for every one step the 'slow' pointer takes. When the 'fast' pointer reaches the end of the list, the 'slow' pointer will be at the middle node. If there are two middle nodes, the 'slow' pointer will point to the second one as required.

//Link: https://leetcode.com/problems/middle-of-the-linked-list/