//Check if two strings is Anagram
bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length()!=b.length())
         return false;
        map<char,int>mp1;
        map<char,int>mp2;
        
        for(int i=0;i<a.length();i++)
        {
            mp1[a[i]]++;
            mp2[b[i]]++;
        }
        for(int i=0;i<a.length();i++)
        {
            if(mp1[a[i]]!=mp2[a[i]])
             return false;
        }
        return true;
    }