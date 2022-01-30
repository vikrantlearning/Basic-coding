Class Solution{
public:
void func(Node *root,Node* &prev,int &f)
    {
        if(root==NULL)
        return;
        func(root->left,prev,f);
        if(prev!=NULL&&root->data<=prev->data)
        {
            f=0;
            return;
        }
        prev=root;
        func(root->right,prev,f);
    }
	 bool isBST(Node* root) 
    {
        // Your code here
        Node *prev=NULL;
        int f=1;
        func(root,prev,f);
        return f;
        
    }
}