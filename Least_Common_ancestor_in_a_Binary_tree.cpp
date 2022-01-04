//FIND Least Common Ancestor

Node* lca(Node* root ,int n1 ,int n2 )
    {
        
        if(root==NULL) //REACHED END BUT HAVE NOT FOUND ONE OF THE REQUIRED NODE
        return NULL;
        
        if(root->data==n1||root->data==n2)// If anydata matches then return the node;
         return root;
         
        Node* LeftLca=lca(root->left,n1,n2); //found one of the nodes from left subtree
        Node* RightLca=lca(root->right,n1,n2);//Found one of the node in right subtree
        
        if(LeftLca && RightLca)//If both are nodes are found=> current node is the LCA
         return root;
         
        if(LeftLca!=NULL)//=>Right LCA is NULL then return left
         return LeftLca;
         
        return RightLca;//=>LeftLCA is nULL THEN RETURN RightLCA
    }
};