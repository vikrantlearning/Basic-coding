int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int sum[n];
	    sum[n-1]=arr[n-1];
	    
	    for(int i=n-2;i>=0;i--)
	    {
	        sum[i]=arr[i];
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]<arr[j]&&sum[i]<sum[j]+arr[i])
	            {
	                sum[i]=sum[j]+arr[i];
	            }
	        }
	        
	    }
		return max_element(sum,sum+n);
		
	}
	
	//refer logest_subsequence.cpp
	