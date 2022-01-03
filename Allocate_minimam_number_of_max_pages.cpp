//Allocate min number of max pages
bool isSolvable(int a[],int n,int m,int mid)
    {
        int sum=0,student=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mid)
             return false;
            if(sum+a[i]>mid)
            {
                 student++;
                 sum=a[i];
                 if(student>m)
                 return false;
            }
            else
                 sum=sum+a[i];
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        int ans=INT_MAX;
        int start=0,end=0,student;
        if(M>N)
        return -1;
        for(int i=0;i<N;i++)
        {
            end=end+A[i];
        }
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(isSolvable(A,N,M,mid))
            {
                ans=min(ans,mid);
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
     return ans;
    }