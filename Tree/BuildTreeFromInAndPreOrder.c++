#include <bits/stdc++.h>
using namespace std;
int preidx = 0;

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
void printingTraversal(node* root , vector<int>& pre, vector<int>& in)
{
    cout << "Printing PreOrder: ";
    for (int i : pre) 
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Printing InOrder: ";
    for (int i : in) 
    {
        cout << i << " ";
    }
    cout << endl;
}
node* BuildTree(vector<int>& pre, vector<int>& in, int start, int end) 
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

    root->left = BuildTree(pre, in, start, index - 1);
    root->right = BuildTree(pre, in, index + 1, end);

    return root;
}
void Getdata(node* root)
{
    vector<int> pre;
    vector<int> in;
    cout << endl << "Example data is : 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 " << endl ;
    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    PreOrder(root, pre);
    Inorder(root, in);

    cout << "Printing PreOrder and InOrder traversal " << endl ;

    printingTraversal(root , pre , in);

   
    node* newRoot = BuildTree(pre, in, 0, in.size() - 1);

    cout << endl << "After Reconstruction, the tree's LevelOrder Traversal is: ";
    LevelOrder(newRoot);
}

int main() {
    node* root = NULL;
    Getdata(root);

    return 0;
}
