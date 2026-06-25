#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int value)
    {
        val=value;
        left=NULL;
        right=NULL;
    }


};

Node* insert(Node* root, int key)
{
    if(root==NULL)
    {
        return new Node(key);

    }
    if(key<root->val)
    {
        root->left=insert(root->left,key);
    }
    else{
        root->right=insert(root->right,key);
    }

    return root;
}

void inorder(Node* root)
{
    if(root==NULL)
    {
        return;

    }

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main()
{
    
    return 0;
}