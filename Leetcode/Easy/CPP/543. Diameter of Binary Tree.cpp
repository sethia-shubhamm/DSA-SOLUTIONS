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
    int findDiameter(TreeNode* root, int& maxi){
        if(root==NULL) return 0;
        int rh=findDiameter(root->right, maxi);
        int lh=findDiameter(root->left, maxi);
        maxi=max(maxi,lh+rh);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int h=findDiameter(root,maxi);
        return maxi;
    }
};

// Short Thought Process: To find the diameter of a binary tree, we use a recursive function that calculates the height of each subtree. During this process, we also keep track of the maximum diameter found so far by summing the heights of the left and right subtrees at each node. The diameter is updated whenever we find a larger sum. Finally, we return the maximum diameter found during the traversal.