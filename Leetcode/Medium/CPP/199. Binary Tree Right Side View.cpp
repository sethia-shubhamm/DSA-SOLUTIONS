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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int round=1;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* cur=q.front(); q.pop();
                if(i==sz-1) ans.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        }
        return ans;
    }
};

// Short Thought Process: To obtain the right side view of a binary tree, we perform a level-order traversal using a queue. At each level, we keep track of the number of nodes and add the value of the last node processed at that level to our result list. This ensures that we capture the rightmost node visible from that level. We continue this process until all levels of the tree have been traversed, ultimately returning the list of right side view nodes.

//Link: https://leetcode.com/problems/binary-tree-right-side-view/