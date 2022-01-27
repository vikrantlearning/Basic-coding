//Right view of a tree
 vector<int> rightView(Node *root)
    {
       // Your Code here
       queue<Node*> q;
       q.push(root);
       vector<int>ans;
       while(!q.empty())
       {
           int n=q.size();
           for(int i=1;i<=n;i++)
           {
               Node *curr=q.front();
               q.pop();
               if(i==n)
               {
                   ans.push_back(curr->data);
               }
               if(curr->left)
               {
                   q.push(curr->left);
               }
               if(curr->right)
               {
                  q.push(curr->right); 
               }
           }
       }
       return ans;
    }