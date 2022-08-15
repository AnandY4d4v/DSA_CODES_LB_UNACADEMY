#include <bits/stdc++.h>
using namespace std;
class tree{
    public:
    int root;
    tree* left;
    tree* right;


    tree(int n){
        this->root=n;
        this->left=NULL;
        this->right=NULL;

    }
};
tree* buildTree(tree* root){
    cout<<"Enter data->";
    int n;
    cin>>n;
    root = new tree(n);    
        if(n == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << n << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << n << endl;
    root->right = buildTree(root->right);
    return root;

}
void inorder(tree* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> root << " ";
    inorder(root->right);
}
int main(){
    tree* t = NULL;
t=buildTree(t);
    inorder(t); 
}