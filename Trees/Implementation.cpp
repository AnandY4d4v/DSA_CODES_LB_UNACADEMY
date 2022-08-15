#include <bits/stdc++.h>
using namespace std;
class tree{
    public:
        int data;
        tree* left;
        tree* right;


        //implementation
        tree(int n){
            this->data=n;
           this-> left= NULL;
           this-> right=NULL;

        }
};
tree* buildTree(tree* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new tree(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}
void inorder(tree* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);
}
int main(){
    
    
    tree* t = NULL;
      t = buildTree(t);
        cout << "inorder traversal is:  ";
    inorder(t); 
    return 0;
} 