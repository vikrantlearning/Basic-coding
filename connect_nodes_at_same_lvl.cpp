//Connect nodes at same level
void connect(Node *root)
    {
       // Your Code Here
       queue<Node*> q;
       
       q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           
           for(int i=0;i<n;i++)
           {
               Node *temp=q.front();
               q.pop();
               if(i==n-1)
               temp->nextRight=NULL;
               else{
               temp->nextRight=q.front();
               }
               if(temp->left)
                q.push(temp->left);
               if(temp->right)
                q.push(temp->right);
           }
       }
    }    