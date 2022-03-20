//Construct Tree from inorder and preorder
class Solution{
    public:
    int idx=0;
     map<int,int> mp;
    Node* consTree(int in[],int pre[],int strt,int end,int n)
    {
        
        int index;
        if(strt>end)
         return NULL;
        /*for(int i=strt;i<=end;i++)
        {
            if(in[i]==pre[idx])
            { 
             index=i;
             break;
            }
        }*/
        index=mp[pre[idx]];
        Node *root=new Node(pre[idx++]);
        if(strt==end)
         return root;
        
        
        root->left=consTree(in,pre,strt,index-1,n);
        root->right=consTree(in,pre,index+1,end,n);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
       
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        Node *head=consTree(in,pre,0,n-1,n);
        return head;
        
    }
}