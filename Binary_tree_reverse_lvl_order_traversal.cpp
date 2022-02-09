//Binary tree Reverse level order traversal
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<TreeNode*> q;
        q.push(root);
        stack<int>st;
         vector<int> row;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            { 
                TreeNode *curr=q.front();
                q.pop();
               
                st.push(curr->val);
                if(curr->right)
                {
                    q.push(curr->right);
                }
                if(curr->left)
                {
                    q.push(curr->left);
                }
            }
            int m=st.size();
            for(int i=0;i<m;i++)
            {
                row.push_back(st.top());
                st.pop();
            }
            v.push_back(row);
            row.clear();
        }
        reverse(v.begin(),v.end());
        return v;
    }
    
};