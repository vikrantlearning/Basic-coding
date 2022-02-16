//Boundary Traversal
void leftBoundary(Node *root,vector<int> &ans)
    {
        if(root==NULL)
        return;
        if(root->left)
        {
             ans.push_back(root->data);
             leftBoundary(root->left,ans);
        }
        else if(root->right)
        {
            ans.push_back(root->data);
            leftBoundary(root->right,ans);
        }
    }
    void leafBoundary(Node *root,vector<int> &ans)
    {
        if(root==NULL)
        return;
        leafBoundary(root->left,ans);
        if(root->left==NULL&&root->right==NULL)
        ans.push_back(root->data);
        
        leafBoundary(root->right,ans);
    }
    void rightBoundary(Node *root,vector<int> &ans)
    {
        if(root==NULL)
        return;
        if(root->right)
        {
            rightBoundary(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left)
        {
            rightBoundary(root->left,ans);
            ans.push_back(root->data);
        }
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        ans.push_back(root->data);
        leftBoundary(root->left,ans);
        if(root->left||root->right)
        leafBoundary(root,ans);
        rightBoundary(root->right,ans);
        return ans;
        
    }