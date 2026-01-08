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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<arr.size();i=i+k){
            if(i+k<=arr.size())reverse(arr.begin()+i,arr.begin()+i+k);
        }
        
        int i=0;
        while(temp){
            temp->val=arr[i++];
            temp=temp->next;
        }
        
        return head;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(N) (not optimal, can be done in O(1) space)
//Link: https://leetcode.com/problems/reverse-nodes-in-k-group/description/