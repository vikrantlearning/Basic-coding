//Snake and ladder Problem--> LLD(Low level design)
int minThrow(int N, int arr[]){
        // code here
        map<int,int> mp;
        queue<pair<int,int>> q;
        for(int i=0;i<(2*N);i=i+2)
        {
            mp[arr[i]]=arr[i+1];
        }
        vector<bool>visit(31,false);
        q.push({1,0});
        visit[1]=true;
        while(!q.empty())
        {
            auto c=q.front();
            q.pop();
            for(int i=c.first+1;i<=c.first+6 && i<=30;i++)
            {
                if(!visit[i])
                {
                   if(mp[i])
                   {
                       q.push({mp[i],c.second+1});
                       
                   }
                   else
                   {
                       q.push({i,c.second+1});
                       
                   }
                   visit[i]=true;
                }
                if(i==30)
                 return c.second+1;
            }
        }
    }