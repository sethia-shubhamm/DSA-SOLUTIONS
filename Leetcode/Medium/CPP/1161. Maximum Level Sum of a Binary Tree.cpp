/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ansLvl=1;
        int lvl=0;
        int maxSum=root->val;
        while (!q.empty()) {
            int sz=q.size();
            int sum=0;
            for(int i=0;i<sz;i++){
                TreeNode* cur=q.front(); q.pop();
                sum+=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            lvl++;            
            if(maxSum<sum){
                maxSum=sum;
                ansLvl=lvl;
            }
        }
        return ansLvl;
    }
};

// Short Thought Process: To find the level with the maximum sum in a binary tree, we perform a level-order traversal using a queue. For each level, we calculate the sum of node values and compare it with the maximum sum found so far. If the current level's sum exceeds the maximum, we update the maximum sum and record the current level number. Finally, we return the level number with the highest sum.
//Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/⁡