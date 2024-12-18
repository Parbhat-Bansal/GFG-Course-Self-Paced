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

void LevelOrderTraversal(node* root )
{
    queue<node*> q;
    q.push(root) ;
    int max = -1 ;
    int min = root -> data  ;

    while(!q.empty())
    {
        node* curr = q.front() ;
        q.pop();

        if(curr -> data > max)
        {
            max = curr -> data ;
        }


        if(curr -> data < min)
        {
            min = curr -> data ;
        }


        if(curr -> left != NULL)
        {
            q.push(curr -> left);
        }

        if(curr -> right!= NULL)
        {
            q.push(curr -> right);
        }
    }
    cout << "Maximum value of node is : " << max << endl ;
    cout << "Minimum value of node is : " << min << endl ;
}
int main() {
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

     LevelOrderTraversal(root) ;

    return 0;
}