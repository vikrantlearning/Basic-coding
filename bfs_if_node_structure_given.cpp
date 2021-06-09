struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> v;
        if(root==NULL)
            return v;
        vector<int> vrow;
        TreeNode* ptr;
        ptr=root;
        q.push(ptr);
       
        while(!q.empty())
        {
           int n=q.size();
            for(int i=1;i<=n;i++)
            {
              TreeNode* cur=q.front();
              q.pop();
              vrow.push_back(cur->val);
              if(cur->left!=NULL)
              {  
                 q.push(cur->left);
                
              }
              if(cur->right!=NULL)
              {  
                q.push(cur->right);
                
              }
           }
            v.push_back(vrow);
            vrow.clear();
        }
        return v;
    }
};