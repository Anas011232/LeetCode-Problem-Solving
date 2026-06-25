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

int main()
{
    
    return 0;
}