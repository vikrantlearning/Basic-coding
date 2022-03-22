//Row with max 1s
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    if(n==0)
	     return 0;
	    int i=0,j=m-1;
	    int max_row=-1;
	    while(i<n and j>=0)
	    {
	        if(arr[i][j]==1)
	        {
	            max_row=i;
	            j--;
	        }
	        else{
	           i++;
	        }
	    }
	    return max_row;
	    
	}