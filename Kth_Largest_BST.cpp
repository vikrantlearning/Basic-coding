class Solution
{
    public:
    void rev_inorder(Node* root,int K,int &ans,int &cnt)
    {
        if(root==NULL)
        return;
        
        rev_inorder(root->right,K,ans,cnt);
        cnt++;
        //cout<<cnt<<" "<<root->data<<"\n";
        if(cnt==K){
        ans=root->data;
        return;
        }  
        rev_inorder(root->left,K,ans,cnt);
        
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans=-1,cnt=0;
        rev_inorder(root,K,ans,cnt);
        return ans;
    }
};