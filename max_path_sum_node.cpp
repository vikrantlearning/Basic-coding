 //maximam path sum node
 int ans=INT_MIN;
    int dfs(Node *root,int &ans)
    {
        if(root==NULL)
        return 0;
        
        //int curr_data=root->data;
        int l=dfs(root->left,ans);
        int r=dfs(root->right,ans);
        
        ans=max(ans,max(root->data,max(root->data+l,max(root->data+r,root->data+r+l))));
        
        return max(root->data,max(root->data+l,root->data+r));
    }
    int findMaxSum(Node* root)
    {
        // Your code goes here
       
       int flag=0;
       dfs(root,ans);
        return ans;
    }