 //Longest Substring without Repeatititon
 
 int lengthOfLongestSubstring(string s) {  
        int ans=0;
        int j=0;
        map<char,int> mp;
        for(int i=0,j=0;i<s.length();i++)
        {
            j=max(mp[s[i]],j);
            ans=max(ans,i-j+1);
            mp[s[i]]=i+1;
        }
        return ans;
    }