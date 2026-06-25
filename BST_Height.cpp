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

int height(Node* root)
{
    if(root==NULL)
    {
        return -1;
    }

    return 1+max(height(root->left),height(root->right));

}
int main()
{
    Node* root=NULL;

    int n,val;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>val;
        root=insert(root,val);
    }
   
    return 0;
}