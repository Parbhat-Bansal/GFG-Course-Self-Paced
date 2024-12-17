#include <iostream>
#include <queue>
#include <vector>
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

void LeftView(node* root)
{
    if (root == NULL) 
    {
        return;
    }

    queue<node*> q;
    q.push(root);
    vector<int> res;

    while (!q.empty()) 
    {
        int size = q.size();
        for (int i = 0; i < size; i++) 
        {
            node* curr = q.front();
            q.pop();

            if (i == size-1) 
            {
                res.push_back(curr -> data);
            }

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

    cout << endl;
}
int main() {
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    LeftView(root);
}