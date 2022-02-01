	//Merging two sorted arrays
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   sort(a,a+n);
	   sort(b,b+m);
	   int x=0,y=0;
	   int i=0;
	   while(x<n&&y<m)
	   {
	       if(a[x]<b[y])
	       {
	           res[i]=a[x];
	           x++;
	           i++;
	       }
	       else
	       {
	           res[i]=b[y];
	           y++;
	           i++;
	       }
	   }
	   while(x<n)
	   {
	           res[i]=a[x];
	           x++;
	           i++;
	   }
	 	while(y<m)
	   {
	           res[i]=b[y];
	           y++;
	           i++;
	   }
	}