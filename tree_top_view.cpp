//Tree top view
vector<int> topView(Node *root)
    {
        //Your code here
        map<Node*,int>mp;
        map<int,int>mp1;
        int hd=0;
        queue<Node*>q;
        Node* cur=root;
        mp[cur]=hd;
        q.push(cur);
        mp1[hd]=cur->data;
        vector<int>v;
        while(!q.empty())
        {
            Node *temp=q.front();
            q.pop();
            int hd1=mp[temp];
            if(temp->left)
            {
                mp[temp->left]=hd1-1;
                if(!mp1.count(hd1-1))
                {
                    mp1[hd1-1]=temp->left->data;
                }
                q.push(temp->left);
            }
            if(temp->right)
            {
                mp[temp->right]=hd1+1;
                if(!mp1.count(hd1+1))
                {
                    mp1[hd1+1]=temp->right->data;
                }
                q.push(temp->right);
            }
        }
        for(auto it:mp1)
        {
            v.push_back(it.second);
        }
        return v;
    }
