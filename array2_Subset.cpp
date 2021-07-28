//Array Subset of another array
string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int> mp1;
    map<int,int> mp2;
    for(int i=0;i<n;i++)
    {
        mp1[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        mp2[a2[i]]++;
    }
    for(auto it=mp2.begin();it!=mp2.end();it++)
    {
        if(mp1[it->first]!=it->second)
         return "No";
    }
    return "Yes";
}