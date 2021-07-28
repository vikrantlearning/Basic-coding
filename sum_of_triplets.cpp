 //Sum of tripletss equal to X in an array
 bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        map<int,int>mp;
        for(int i=0;i<n;i++)
         mp[A[i]]++;
        int value;
        for(int i=0;i<n;i++)
        {
            if(A[i]<X){
            value=X-A[i];
            for(int j=i+1;j<n;j++)
            {
              if(mp[value-A[j]]&&(value-A[j]!=A[j]))
              {
                  return true;
              }
            }
            }
            
        }
        return false;
    }