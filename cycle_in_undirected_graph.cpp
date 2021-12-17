bool dfs(int curr,int par,vector<int>&vis,int V,vector<int> adj[])
    {
        vis[curr]=1;
        for(int i=0;i<adj[curr].size();i++)
        {
            int child=adj[curr][i];
            if(vis[child]==0)
            {
                if(dfs(child,curr,vis,V,adj)==true)
                return true;
            }
            else
            if(child!=par)
             return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        int par=-1;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0){
            if(dfs(i,par,vis,V,adj)==true)
             return true;
            }
        }
        return false;
    }