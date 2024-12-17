#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) 
    {
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

void Inorder(node* root)
{
    if(root != NULL)
    {
        Inorder(root -> left);
        cout << root -> data << " " ;
        Inorder(root -> right);
    }

}


int main() {
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    Inorder(root);
    cout << endl ;
}