//mostfrequently occuring string with word whose first occurence occurs last
string mostFrequentWord(string arr[], int n)
    {
        // code here
        map<string,int>mp;
        map<string,int>mp1;
        int fi[n]={0};
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==1)
            {
                fi[i]=1;
            }
        }
        int max=-1;
        string s;
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>=max&&fi[i])
            {
                s=arr[i];
                max=mp[arr[i]];
            }
        }
        return s;
    }
