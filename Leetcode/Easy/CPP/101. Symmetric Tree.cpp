/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(p->val!=q->val) return false;
        return check(p->left,q->right) && check(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};


// Short Thought Process: To determine if a binary tree is symmetric, we use a recursive helper function that compares two nodes. The function checks if both nodes are null (symmetric), if one is null (not symmetric), and if their values are equal. It then recursively checks the left subtree of one node against the right subtree of the other and vice versa. The main function initiates this process by comparing the left and right children of the root node. If all corresponding nodes are equal in this mirrored manner, the tree is symmetric.

//Link: https://leetcode.com/problems/symmetric-tree/⁡