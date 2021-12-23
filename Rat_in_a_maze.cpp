class Solution{
    public:
    vector<string> v;
    void dfs(int i,int j,vector<vector<int>> &m,string s,int n)
    {
        if(i<0||j<0||i>=n||j>=n)
        return;
        if(m[i][j]==-1||m[i][j]==0)
        return;
        if(i==n-1&&j==n-1)
        {
            v.push_back(s);
            return;
        }
        int x=m[i][j];
        m[i][j]=-1;
        dfs(i-1,j,m,s+'U',n);
        dfs(i+1,j,m,s+'D',n);
        dfs(i,j+1,m,s+'R',n);
        dfs(i,j-1,m,s+'L',n);
        m[i][j]=x;
        return;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        v.clear();
        if(m[0][0]==0||m[n-1][n-1]==0)
        return v;
        string s="";
        dfs(0,0,m,s,n);
        sort(v.begin(),v.end());
        return v;
    }
};