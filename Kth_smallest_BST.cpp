void inorder(Node *root,int K,int &ans,int &cnt)
    {
        if(root==NULL)
        return;
        
        inorder(root->left,K,ans,cnt);
        cnt++;
        if(cnt==K)
        {
            ans=root->data;
            return;
        }
        inorder(root->right,K,ans,cnt);
        
    }
    int KthSmallestElement(Node *root,int K) {
        // add code here.
        int ans=-1,cnt=0;
        inorder(root,K,ans,cnt);
        
        return ans;
    }