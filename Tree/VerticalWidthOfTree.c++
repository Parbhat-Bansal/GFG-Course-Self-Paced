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


int VerticalWidth(node* root) {
    if (!root) return 0; 

    queue<node*> q;         
    queue<int> hdQueue;     
    q.push(root);
    hdQueue.push(0);

    int minHD = 0, maxHD = 0; 

    while (!q.empty()) {
        node* curr = q.front();
        int currHD = hdQueue.front();
        q.pop();
        hdQueue.pop();

        
        minHD = min(minHD, currHD);
        maxHD = max(maxHD, currHD);

        
        if (curr->left) {
            q.push(curr->left);
            hdQueue.push(currHD - 1);
        }
        if (curr->right) {
            q.push(curr->right);
            hdQueue.push(currHD + 1);
        }
    }

    
    return maxHD - minHD + 1;
}

int main() {
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root);

    cout << "Vertical Width of the Binary Tree: " << VerticalWidth(root) << endl;

    return 0;
}
