#include <iostream>
#include <vector>
using namespace std;

class Tree{
    int data;
    Tree* left;
    Tree* right;
public:
    Tree(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Array to Tree Conversion
Tree* arrayToTree(vector<int>& arr, int index) {
    if (index >= arr.size()) {
        return NULL;
    }
    Tree* root = new Tree(arr[index]);
    root->left = arrayToTree(arr, 2 * index + 1);
    root->right = arrayToTree(arr, 2 * index + 2);
    return root;
}   


int main(){
    Tree* root=new Tree(1);
    root->left=new Tree(2);
    root->right=new Tree(3);

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Tree* rootFromArray = arrayToTree(arr, 0);
        
    return 0;
}