class Solution{
  public:
    /*You are required to complete this method*/
    set<int> s;
    void solve(Node *root,int level)
    {
        if(!root)
         return;
        if(!root->left and !root->right)
         s.insert(level);
         
        solve(root->left,level+1);
        solve(root->right,level+1);
    }
    bool check(Node *root)
    {
        //Your code here
        solve(root,0);
        if(s.size()!=1)
         return 0;
         
        return 1;
        
    }
};