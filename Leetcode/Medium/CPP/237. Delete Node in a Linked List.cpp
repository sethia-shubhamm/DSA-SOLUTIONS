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
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

// Short Thought Process: To delete a node in a singly linked list when only given access to that node, we can copy the value of the next node into the current node and then bypass the next node by adjusting the next pointer. This effectively removes the next node from the list while maintaining the structure of the list.

//Link: https://leetcode.com/problems/delete-node-in-a-linked-list/