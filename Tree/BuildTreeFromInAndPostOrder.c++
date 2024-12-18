#include <bits/stdc++.h>
using namespace std;

class node 
{
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
node* buildTree(node* root) 
{
    int data;
    cin >> data;

    if (data == -1) 
    {
        return NULL;
    }

    root = new node(data);
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;
}
void PreOrder(node* root, vector<int>& pre) 
{
    if (root != NULL) {
        pre.push_back(root->data);
        PreOrder(root->left, pre);
        PreOrder(root->right, pre);
    }
}
void Inorder(node* root, vector<int>& in) 
{
    if (root != NULL) {
        Inorder(root->left, in);
        in.push_back(root->data);
        Inorder(root->right, in);
    }
}

node* BuildTree(vector<int>& pre, vector<int>& in, int start, int end, int& preidx) 
{
    if (start > end) {
        return NULL;
    }

  
    node* root = new node(pre[preidx++]);

    
    int index;
    for (int i = start; i <= end; i++) {
        if (in[i] == root->data) {
            index = i;
            break;
        }
    }

    root->left = BuildTree(pre, in, start, index - 1, preidx);
    root->right = BuildTree(pre, in, index + 1, end, preidx);

    return root;
}

void LevelOrder(node* root) {
    if (!root) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* curr = q.front();
        q.pop();

        cout << curr->data << " ";
        if (curr->left != NULL) {
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main() {
    node* root = NULL;
    vector<int> pre;
    vector<int> in;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    PreOrder(root, pre);
    Inorder(root, in);



   
    int preidx = 0;
    node* tree = BuildTree(pre, in, 0, in.size() - 1, preidx);

    cout << "Level Order Traversal of Reconstructed Tree: ";
    LevelOrder(tree);

    return 0;
}
