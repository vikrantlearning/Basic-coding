//find missing and repeating
int *findTwoElement(int *arr, int n) {
        // code here
        int sum=0,ar_sum=(n*(n+1))/2,count[n+1]={0},val;
        sort(arr,arr+n);
        int *ans=new int[2];
        for(int i=0;i<n;i++)
        {
          count[arr[i]]++;
          if(count[arr[i]]==2)
          {
              ans[0]=arr[i];
          }
        }
       for(int i=0;i<n;i++)
       {
           if(count[i+1]==0)
           { val=i+1;
            break;
           }
       }
       ans[1]=val;
       return ans;
    }