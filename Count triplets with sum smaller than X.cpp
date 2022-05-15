//Count triplets with sum smaller than X
long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int ans=0;
	    int i=0;
	    while(i<n-2)
	    {
	       int sum1=sum-arr[i];
	       int j=i+1,k=n-1;
	       while(j<k)
	       {
	           int temp=arr[j]+arr[k];
	           if(temp>=sum1)
	           {
	               k--;
	           }
	           else
	           {
	               ans+=k-j;
	               j++;
	           }
	       }
	       i++;
	    }
	    return ans;
	}