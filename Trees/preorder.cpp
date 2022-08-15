#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        int data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildtree()
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    if (data == -1)
        return NULL;

    Node* node1 = new Node(data);
    cout << "Enter data for left child" << endl;
    node1->left = buildtree();

    cout << "Enter data for right child" << endl;
    node1->right = buildtree();

    return node1;
}

void pre_order(Node* root)
{
    if (root == NULL)
        return;

    cout << root->data << "  ";
    pre_order(root->left);
    pre_order(root->right);
}

int main()
{
    Node* root = NULL;
    root = buildtree();
    pre_order(root);
    return 0;
}