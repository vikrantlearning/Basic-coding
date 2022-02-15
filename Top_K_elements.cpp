 //TOP_K_Elements in a stream
 vector<int> kTop(int a[], int n, int k) 
    { 
        //code here.
       unordered_map<int,int>freq;
       vector<int> top(k+1);
       vector<int>ans;
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
            top[k]=a[i];
            auto it=find(top.begin(),top.end()-1,a[i]);
            for(int m=distance(top.begin(),it)-1;m>=0;m--)
            {
                if(freq[top[m+1]]>freq[top[m]])
                 swap(top[m+1],top[m]);
                else if((freq[top[m+1]]==freq[top[m]])&&(top[m]>top[m+1]))
                 swap(top[m+1],top[m]);
                 else
                 break;
            }
            for(int t=0;t<k;t++)
            {
            if(top[t]!=0)
            ans.push_back(top[t]);
            }
        }
        return ans;
        
    }