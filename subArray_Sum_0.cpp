//subarray with sum 0
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        //queue<int> q;
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            mp[sum]++;
            if(sum==0||arr[i]==0||mp[sum]==2)
             return true;
        }
        return false;
    }