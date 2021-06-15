vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<pair<int,int>>v;
        //int hd=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        queue<Node *>q;
        vector<int> ans;
        //map<int,vector<int>>mp;
        multimap<int,int>mp;
        q.push(root);
        int hd[5001];
        hd[root->data]=0;
       // v.push_back({hd,root->data});
        while(!q.empty())
        {
            Node *cur=q.front();
            q.pop();
            //pq.push({hd[cur->data],cur->data});
            //mp[hd[cur->data]].push_back(cur->data);
            mp.insert(make_pair(hd[cur->data],cur->data));
            if(cur->left)
            {
                q.push(cur->left);
                hd[cur->left->data]=hd[cur->data]-1;
            }
            if(cur->right)
            {
                q.push(cur->right);
                hd[cur->right->data]=hd[cur->data]+1;
            }
        }
       /* while(!pq.empty())When using Priority_Queue
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }*/
        //map<int,vector<int>>::iterator itr;
        for(auto itr=mp.begin();itr!=mp.end();++itr)
        {
            //int a=itr->first;
           // ans.push_back(mp[a]);
            /*for(auto it:mp[a])
            {
                ans.push_back(mp[a][it]);
            }*/
            ans.push_back(itr->second);
        }
        return ans;
    }