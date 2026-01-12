class Solution {
public:
    int findDepth(TreeNode* root){
        if(root==NULL) return 0;
        
        int lh=findDepth(root->left);
        int rh=findDepth(root->right);

        if(lh==-1 || rh==-1) return -1;

        if(abs(lh-rh)>1) return -1;

        return max(lh,rh)+1;
    }

    bool isBalanced(TreeNode* root) {
        return findDepth(root) != -1;
    }
};

// Short Thought Process: To determine if a binary tree is balanced, we use a recursive function that calculates the depth of each subtree. If at any point the difference in depths between the left and right subtrees exceeds 1, we return -1 to indicate that the tree is not balanced. If we successfully compute the depths without finding an imbalance, we return the maximum depth of the tree. The main function checks if the result of the depth calculation is -1 to determine if the tree is balanced.