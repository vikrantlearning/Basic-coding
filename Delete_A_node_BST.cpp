//Delete a Node from BST 
TreeNode* deleteNode(TreeNode* root, int key) {
       if(root==NULL)
           return NULL;
        if(root->val>key)
            root->left=deleteNode(root->left,key);
        else if(root->val<key)
            root->right=deleteNode(root->right,key);
        else
        {
            if(!root->left and !root->right)
                return NULL;
            if(root->left and !root->right)
            {
                TreeNode *temp=root;
                root=root->left;
                delete temp;
                return root;  
            }
            else if(root->right and !root->left)
            {
                return root->right;
            }
            else
            {
                TreeNode *temp=root->left;
                TreeNode *temp1=root->right;
                while(temp1->left)
                {
                    temp1=temp1->left;
                }
                swap(root->val,temp1->val);
                root->right=deleteNode(root->right,key);
            }
        }
        return root;
            
    }