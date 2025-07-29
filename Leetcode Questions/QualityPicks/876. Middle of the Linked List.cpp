class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int len=0;
        while(temp){
            temp=temp->next;
            len++;
        }
        temp=head;
        int mid;
        if(len%2==0) mid=(len/2);
        else mid= ceil (len/2);
        int cnt=0;
        while(cnt<mid){
            temp=temp->next;
            cnt++;
        }
        return temp;
    }
};

/Totoise and Hare Approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode *slow=head;
        while(fast!=NULL && fast->next!=NULL ){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};