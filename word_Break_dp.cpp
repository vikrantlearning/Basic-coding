//Word BReak problem soved by DP
{
public:
    map<string,int>dp;
    int solve(string s,vector<string> &B)
    {
        
         int sz=s.length();
        if(sz==0)
        return 1;
        if(dp[s]!=0)
         return dp[s]; 
       
        for(int i=1;i<=sz;i++)
        {
            int f=0;
            string A=s.substr(0,i);
            int n=B.size();
            for(int j=0;j<n;j++)
            {
                if(A.compare(B[j])==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1 and solve(s.substr(i,sz-i),B)==1)
             return dp[s]=1;
             
        }
        return dp[s]=-1;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        int x=solve(A,B);
        if(x==1)
        return 1;
        
        return 0;
    }
};