#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node()
    {
        left=NULL;
        right=NULL;
    }
}
void insert_in_tree(Node* h,int a)
{
    if(h==NULL)
    {
        h=new Node();
        h->data=a;
    }
    else
    {
        if(a<h->data)
        {
            insert_in_tree(h->left,a);
        }
        else if(a>h->data)
        {
            insert_in_tree(h->right,a);
        }
        
    }
    
}
Node* constructTree(int pre[], int size)
{
    //code here
    Node* head;
    Node* ptr;
    head=new Node();
    head->data=pre[0];
    ptr=head;
    for(int i=1;i<size;i++)
    {
        insert_in_tree(head,pre[i]);
    }
    return ptr;
}
int main()
{
    cout<<"Hello World";

    return 0;
}
