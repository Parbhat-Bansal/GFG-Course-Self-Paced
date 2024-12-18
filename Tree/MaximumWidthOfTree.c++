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

int LevelOrder(node* root) 
{
    if (root == NULL) return 0;

    queue<node*> q;
    q.push(root);
    int maxWidth = 0;

    while (!q.empty()) 
    {
        int size = q.size(); 
        maxWidth = max(maxWidth, size);

        for (int i = 0; i < size; i++) 
        {
            node* curr = q.front();
            q.pop();

            if (curr->left != NULL) 
            {
                q.push(curr->left);
            }

            if (curr->right != NULL) 
            {
                q.push(curr->right);
            }
        }
    }

    return maxWidth;
}

int main() 
{
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    int width = LevelOrder(root);
    cout << "Width of the tree is: " << width << endl;

    return 0;
}
