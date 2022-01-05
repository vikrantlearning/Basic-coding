//distance between two nodes in a tree-->first found least common ancestor, then found the distance of both the nodes from it and add it
Node* LCA(Node *root,int a, int b)
    {
        if(root==NULL)
        return NULL;
        
        if(root->data==a||root->data==b)
         return root;
        
        Node* leftLCA=LCA(root->left,a,b);
        Node* rightLCA=LCA(root->right,a,b);
        
        if(leftLCA && rightLCA)
        {
            return root;
        }
        
        if(leftLCA)
         return leftLCA;
         
        return rightLCA;
    }
    int height(Node *root,int curr,int dist)
    {
        if(root==NULL)
        return 0;
        
        if(root->data==curr)
         return dist;
         
        int left=0,right=0;
        
        left=height(root->left,curr,dist+1);
        
        if(left)
         return left;
         
        right=height(root->right,curr,dist+1);
        if(right)
         return right;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
       Node* lca=LCA(root,a,b);
       int dist=0;
       //dist=height(lca,lca->data,dist);
       int dist_a=height(lca,a,dist);
       int dist_b=height(lca,b,dist);
       
       return dist_a+dist_b;
       
    }