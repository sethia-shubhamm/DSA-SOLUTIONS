//Inorder Traversal of a Binary Tree
void inorderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

//Preorder Traversal of a Binary Tree
void preorderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

//Postorder Traversal of a Binary Tree
void postorderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

//Level Order Traversal of a Binary Tree
#include <queue>
void levelOrderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    queue<Tree*> q;
    q.push(root);
    while (!q.empty()) {
        Tree* current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}

//Iterative Preorder Traversal of a Binary Tree
#include <stack>
void iterativePreorderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    stack<Tree*> s;
    s.push(root);
    while (!s.empty()) {
        Tree* current = s.top();
        s.pop();
        cout << current->data << " ";
        if (current->right != NULL) {
            s.push(current->right);
        }
        if (current->left != NULL) {
            s.push(current->left);
        }
    }
}

//Iterative Inorder Traversal of a Binary Tree
void iterativeInorderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    stack<Tree*> s;
    Tree* current = root;
    while (current != NULL || !s.empty()) {
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }
        current = s.top();
        s.pop();
        cout << current->data << " ";
        current = current->right;
    }
}

//Iterative Postorder Traversal of a Binary Tree
void iterativePostorderTraversal(Tree* root) {
    if (root == NULL) {
        return;
    }
    stack<Tree*> s1, s2;
    s1.push(root);
    while (!s1.empty()) {
        Tree* current = s1.top();
        s1.pop();
        s2.push(current);
        if (current->left != NULL) {
            s1.push(current->left);
        }
        if (current->right != NULL) {
            s1.push(current->right);
        }
    }
    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

//Iterative Postorder Traversal of a Binary Tree (Single Stack)
void iterativePostorderTraversalSingleStack(Tree* root) {
    if (root == NULL) {
        return;
    }
    stack<Tree*> s;
    Tree* current = root;
    Tree* lastVisited = NULL;
    while (current != NULL || !s.empty()) {
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }
        Tree* peekNode = s.top();
        if (peekNode->right != NULL && lastVisited != peekNode->right) {
            current = peekNode->right;
        } else {
            cout << peekNode->data << " ";
            lastVisited = peekNode;
            s.pop();
        }
    }
}