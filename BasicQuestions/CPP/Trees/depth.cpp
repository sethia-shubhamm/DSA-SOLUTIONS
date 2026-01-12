int height(Tree* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int depth(Tree* root, Tree* node, int currentDepth) {
    if (root == NULL) {
        return -1; // Node not found
    }
    if (root == node) {
        return currentDepth;
    }
    int leftDepth = depth(root->left, node, currentDepth + 1);
    if (leftDepth != -1) {
        return leftDepth;
    }
    return depth(root->right, node, currentDepth + 1);
}

/* Short Thought Process: To calculate the height of a binary tree, we use a recursive approach where we compute the height of the left and right subtrees and return the maximum of the two heights plus one for the current node. For calculating the depth of a specific node, we also use recursion, traversing the tree while keeping track of the current depth. If we find the target node, we return the current depth; otherwise, we continue searching in both subtrees. If the node is not found, we return -1. */