//Sort an array according to other
vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<N;i++)
        mp[A1[i]]++;
        
        for(int i=0;i<M;i++)
        {
            int x=A2[i];
            if(mp.find(x)!=mp.end())
            {
                vector<int>v(mp[x],x);
                ans.insert(ans.end(),v.begin(),v.end());
                mp.erase(x);
            }
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            vector<int>v(it->second,it->first);
            ans.insert(ans.end(),v.begin(),v.end());
        }
        return ans;
    } 