 //Minimum platform required
 int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int plat=1;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0;
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        plat++;
    	        i++;
    	    }
    	    else
    	    {
    	        i++;
    	        j++;
    	    }
    	}
    	return plat;
    }