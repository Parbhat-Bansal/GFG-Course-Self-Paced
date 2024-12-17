#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class node {
public:
    int data;
    int level;
    node* left;
    node* right;

    node(int d, int level) {
        this->data = d;
        this->level = level;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root, int level) {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data, level);

    root->left = buildTree(root->left, level);
    root->right = buildTree(root->right, level);

    return root;
}

void preOrder(node* root, vector<vector<int>>& ans, int minLevel) {
    if (root != NULL) {
        int idx = root->level - minLevel;  
        ans[idx].push_back(root->data);

        preOrder(root->left, ans, minLevel);
        preOrder(root->right, ans, minLevel);
    }
}

void LevelOrderTraversal(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);

    int minLevel = 0;
    int maxLevel = 0;

    while (!q.empty()) {
        node* curr = q.front();
        q.pop();

        if (curr->level < minLevel) {
            minLevel = curr->level;
        }
        if (curr->level > maxLevel) {
            maxLevel = curr->level;
        }

        cout <<  curr->data << " " ;

        if (curr->left != NULL) {
            curr->left->level = curr->level - 1;
            q.push(curr->left);
        }

        if (curr->right != NULL) {
            curr->right->level = curr->level + 1;
            q.push(curr->right);
        }
    }

    cout << endl << endl ;
    int size = maxLevel - minLevel + 1;
    vector<vector<int>> ans(size);

    preOrder(root, ans, minLevel);

    cout << "Nodes at each level:" << endl;
    for (int i = 0; i < ans.size(); i++) 
    {
        cout << "Level " << (i + minLevel) << ": ";
        for (int j = 0; j < ans[i].size(); j++) 
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void Inorder(node* root) {
    if (root != NULL) {
        Inorder(root->left);
        cout << "Root is: " << root->data << ", Level is: " << root->level << endl;
        Inorder(root->right);
    }
}

int main() {
    node* root = NULL;

    cout << "Enter data to build the tree (-1 for NULL): ";
    root = buildTree(root, 0);

    cout << "Level Order Traversal of the tree:" << endl;
    LevelOrderTraversal(root);
    cout << endl;

    // cout << "Inorder Traversal is:" << endl;
    //Inorder(root);

    return 0;
}
