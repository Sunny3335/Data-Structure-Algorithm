#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// function for build a tree
    node *buildTree(node *root)
    {
        cout << "Enter the data: " << endl;
        int data;
        cin >> data;
        root = new node(data);

        if (data == -1)
        {
            return NULL;
        }
        // for the left node
        cout << "Enter data for inserting in left " << data << endl;
        root->left = buildTree(root->left);
        // for the right node
        cout << "Enter data for inserting in right of " << data << endl;
        root->right = buildTree(root->right);

        return root;
    }

    void levelOrderTraversal(node* root){
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            node *temp = q.front();
            q.pop();
            if(temp==NULL){
                cout << endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }else{
                cout << temp->data << " ";
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
    }

// inorder traversal (LNR)
void inorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root -> data << " ";
    inorder(root->right);
}

void preorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root -> data << " ";
}

int main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // print the traversal level of the binary
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    // inorder traversal
    inorder(root);
    cout << endl;
    // preorder traversal
    preorder(root);
    cout << endl;
    postorder(root);

    return 0;
}