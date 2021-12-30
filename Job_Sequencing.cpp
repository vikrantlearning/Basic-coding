//Job Sequencing using greedy--->Sorted as per profit. Highest Profit at first. 
static bool comp(Job a,Job b)
    {
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int jobs=0,profit=0;
        sort(arr,arr+n,comp);
        vector<int> v;
        bool visit[n]={false};
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead-1);j>=0;j--)
            {
                if(visit[j]==false)
                {
                    jobs++;
                    profit=profit+arr[i].profit;
                    visit[j]=true;
                    break;
                }
            }
        }
        v.push_back(jobs);
        v.push_back(profit);
        return v;
    } 