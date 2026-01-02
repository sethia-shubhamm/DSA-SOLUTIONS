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
    int maxSum(TreeNode* root,int& maxi){
        if (root==NULL) return 0;
        int lsum=maxSum(root->left, maxi);
        int rsum=maxSum(root->right, maxi);
        lsum = max(0,lsum);
        rsum = max(0,rsum);
        maxi=max(maxi,root->val+lsum+rsum);
        return max(lsum,rsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int r=maxSum(root,maxi);
        return maxi;
    }
};

// Short Thought Process: To find the maximum path sum in a binary tree, we use a recursive function that calculates the maximum sum of paths that can be formed including each node. For each node, we compute the maximum path sums from its left and right children, ensuring that we only consider positive sums (by taking max with 0). We then update the global maximum path sum by considering the sum of the current node's value and the maximum sums from both children. The function returns the maximum sum of paths that can be extended to the parent node. Finally, we return the overall maximum path sum found during the traversal.