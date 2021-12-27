//Topological sort 
vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	  int indegree[V]={0};
	  vector<int>ans;
	  int cnt=0;
	  for(int i=0;i<V;i++)
	  {
	      for(int child:adj[i])
	      {
	          indegree[child]++;
	      }
	  }
	  queue<int> q;
	  for(int i=0;i<V;i++)
	  {
	      if(indegree[i]==0)
	      q.push(i);
	  }
	  while(!q.empty())
	  {
	    int curr=q.front();
	    ans.push_back(curr);
	    q.pop();
	    cnt++;
	    for(int child:adj[curr])
	    {
	        indegree[child]--;
	        if(indegree[child]==0)
	        q.push(child);
	    }
	  }
	 return ans;
	    
	}