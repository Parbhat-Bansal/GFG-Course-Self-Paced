#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) 
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new Node(data);

    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;

}
    

bool ChildrenSum(Node* root)
{
    if (root == NULL) 
    {
        return true; 
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) 
    {
        Node* curr = q.front();
        q.pop();

        if (curr->left != NULL) 
        {
            q.push(curr->left);
        }

        if (curr->right != NULL) 
        {  
            q.push(curr->right);
        }

        int sum = 0;
        if (curr->left != NULL) 
        {
            sum += curr->left->data;
        }
        if (curr->right != NULL) 
        {
            sum += curr->right->data;
        }

        if (sum != curr->data && (curr -> left != NULL || curr -> right != NULL))
        {
            return false;
        }
    }

    return true;
}

int main() {
    Node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    bool ans = ChildrenSum(root);
    cout << endl << ans  << endl ;
}