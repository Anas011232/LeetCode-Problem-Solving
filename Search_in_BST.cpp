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
    else
    {
        root->right=insert(root->right,key);
    }

    return root;
}

Node* search(Node* root,int key)
{
    if(root==NULL || root->val==key)
    {
        return root;
    }

    if(key<root->val)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
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

    int key;
    cin>>key;
    Node* result;


    result=search(root,key);

    if(result!=NULL)
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND";
    }



    
    return 0;
}