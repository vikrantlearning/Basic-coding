 int height(Node *root)
    {
        if(root==NULL)
        return 0;
        int lh=1+height(root->left);
        int rh=1+height(root->right);
        return max(lh,rh);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL)
        return true;
        if(abs(height(root->left)-height(root->right))>1)
        return false;
        
         return isBalanced(root->left) and isBalanced(root->right);
          
    }