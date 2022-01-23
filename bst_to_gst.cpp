// binary Search tree to Greater search tree
int sum=0;
    void transformTree(struct Node *root)
    {
        if(root==NULL)
         return;
        //code here
        transformTree(root->right);
        int a=root->data;
        root->data=sum;
        sum=sum+a;
        transformTree(root->left);
    }