#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data);

    root->left = buildTree(root->left);

    root->right = buildTree(root->right);

    return root;
}

int isBalanced(node* root)
{
    if(root == NULL)
    {
        return 0 ;
    }

    int lh = isBalanced(root -> left);
    if(lh == -1)
    {
        return -1; 
    }

    int rh = isBalanced(root -> right);
    if(rh == -1)
    {
        return -1; 
    }

    if(abs(lh - rh) > 1)
    {
        return -1 ;
    }
    else
    {
        return max(lh,rh) +1 ;
    }
    return -1;
}

int main() {
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    int res = isBalanced(root);
    cout << res << endl; 


    return 0;
}