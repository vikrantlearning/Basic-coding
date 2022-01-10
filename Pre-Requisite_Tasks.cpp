//Prerequisite Tasks
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int> ar[N];
	    int indegree[N]={0};
	    int task=0;
	    queue<int> q;
	    for(pair<int,int> p: prerequisites)
	    {
	        ar[p.second].push_back(p.first);
	        indegree[p.first]++;
	    }
	    
	    for(int i=0;i<N;i++)
	    {
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int curr=q.front();
	        q.pop();
	        task++;
	        for(int child:ar[curr])
	        {
	            indegree[child]--;
	            if(indegree[child]==0)
	            q.push(child);
	        }
	    }
	    if(task==N)
	    {
	      return true;  
	    }
	    
	    return false;
	}