/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool isLeaf(Node* root){
        return root->left == NULL && root->right == NULL;
    }
    
    void addLeftBoundary(Node* root, vector<int> &res){
        Node* cur = root->left;
        while(cur){
            if(!isLeaf(cur)) res.push_back(cur->data);
            if(cur->left) cur = cur->left;
            else cur = cur->right;
        }
    }
    
    void addRightBoundary(Node* root, vector<int> &res){
        Node* cur = root->right;
        vector<int> tmp;
        while(cur){
            if(!isLeaf(cur)) tmp.push_back(cur->data);
            if(cur->right) cur = cur->right;
            else cur = cur->left;
        }
        for(int i = tmp.size()-1; i >= 0; i--) res.push_back(tmp[i]);
    }
    
    void addLeaves(Node* root, vector<int> &res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left) addLeaves(root->left, res);
        if(root->right) addLeaves(root->right, res);
    }

    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);
        return res;
        
    }
};

⁡⁣⁢⁣// Short Thought Process: The boundary traversal of a binary tree involves three main steps: adding the left boundary (excluding leaves), adding all the leaf nodes, and adding the right boundary (excluding leaves) in reverse order. We define helper functions to handle each of these tasks. The main function initializes the result vector, checks if the root is not a leaf, and then calls the helper functions to populate the result with the boundary nodes in the correct order. Finally, it returns the result vector containing the boundary traversal of the tree.

//Link: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1⁡