
int ans=INT_MIN;
    int height(Node *root,int &ans)
    {
        if(root==NULL)
         return 0;
        int l_height=height(root->left,ans);//left subtree height
        int r_height=height(root->right,ans);//right subtree height
        ans=max(ans,l_height+r_height+1);//storing diameter
        return (1+max(l_height,r_height));
    }
    int diameter(Node* root) {
        // Your code here
        Node *temp=root;
        
        height(temp,ans);
        //int ans_r=height(root->right);
        return ans;
    }