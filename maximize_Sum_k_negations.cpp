 long long int maximizeSum(long long int a[], int n, int k)    
	{
        // Your code goes here
        
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 and k>0)
            {
            a[i]=-1*a[i];
            k--;
            }
        }
        
        long long minm=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            minm=min(a[i],minm);
        }
        
        if(k%2!=0)
        {
            sum=sum-2*minm;
        }
        
        return sum;
        /*TLE Approach :-)
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        int cnt=k;
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
        }
        while(cnt)
        {
            long long top=pq.top();
            pq.pop();
            top=-1*top;
            pq.push(top);
            cnt--;
        }
        
        long long ans=0;
        while(!pq.empty())
        {
            long long curr=pq.top();
            pq.pop();
            ans+=curr;
        }
        return ans;*/
    }