void lvlTraversal(struct Node *root,int k,int level,vector<int> &ans)
{
    if(root==NULL)
    return;
    
    if(k==level)
    ans.push_back(root->data);
    
    lvlTraversal(root->left,k,level+1,ans);
    lvlTraversal(root->right,k,level+1,ans);
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  int level=0;
  vector<int> ans;
  if(k==0)
  {
      ans.push_back(root->data);
      return ans;
  }
  
  lvlTraversal(root->left,k,level+1,ans);
  lvlTraversal(root->right,k,level+1,ans);
  
  return ans;
}