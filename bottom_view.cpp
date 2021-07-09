//Bottom view of a tree
//first map is of node and its horizontal dist
//2nd map is for horizontal dist and node->data
vector <int> bottomView(Node *root) {
        // Your Code Here
        map<Node*,int>mp;
        map<int,int>mp1;
        Node *cur=root;
        int hd=0;
        mp[cur]=hd;
        queue<Node*>q;
        vector<int>v;
        q.push(cur);
        while(!q.empty())
        {
            cur=q.front();
            int hd1=mp[cur];
            mp1[hd1]=cur->data;
            q.pop();
            if(cur->left){
                mp[cur->left]=hd1-1;
                q.push(cur->left);
            }
            if(cur->right)
            {
                mp[cur->right]=hd1+1;
                q.push(cur->right);
            }
        }
        
        for(auto it:mp1)
        {
           v.push_back(it.second);
        }
        return v;
    }