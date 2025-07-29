class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* prev=NULL;
        while(slow){
            ListNode* front=slow->next;
            slow->next=prev;
            prev=slow;
            slow=front;
        }
        ListNode* left=head;
        ListNode* right=prev;
        while(right){
            if(right->val!=left->val) return 0;
            right=right->next;
            left=left->next;
        }
        return 1;
    }
};