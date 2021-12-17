 bool dfs(int curr,int V,vector<int>adj[],vector<int>&col,int c)
    {
        col[curr]=c;
        for(int i=0;i<adj[curr].size();i++)
        {
            int child=adj[curr][i];
            if(col[child]==-1)
            {
            if(dfs(child,V,adj,col,c^1)==false)
            return false;
            }
            else if(col[child]==col[curr])
            return false;
        }
        return true;
    }
 /*   bool bfs(vector<int>adj[],int N,int src,vector<int>& color,int c)
    {
     queue<int> q;
     q.push(src);
     color[src] = 1;
     //Process current graph component using BFS
     while(!q.empty())
     {
      int curr = q.front();
      q.pop();
      for(int j=0;j<adj[curr].size();j++)
      {
       int child =adj[curr][j];
       if(color[child]==color[curr]) //Odd-cycle
         return false;
       if(color[child]==-1) //Unvisited node
       {
          color[child] = 1-color[curr];
          q.push(child);
         }
       }
  }
return true;
}*/
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> col(V,-1);
	    int c=0;
	    for(int i=0;i<V;i++)
	    {
	        if(col[i]==-1)
	        {
	         if(dfs(i,V,adj,col,0)==false)
	           return false;
	        }
	    }
	    return true;
	}