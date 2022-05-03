//Flattening a linked list
Node* merge(Node* a,Node* b)
{
    if(a==NULL)
     return b;
    if(b==NULL)
     return a;
    Node *ans;
    if(a->data<b->data)
    {
        ans=a;
        a->bottom=merge(a->bottom,b);
    }
    else
    {
        ans=b;
        b->bottom=merge(a,b->bottom);
    }
    ans->next=NULL;
    return ans;
}
Node *flatten(Node *root)
{
   // Your code her
   if(root==NULL || root->next==NULL)
    return root;

   return merge(root,flatten(root->next));
}
