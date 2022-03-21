cHOOSE And Swap
string chooseandswap(string a){
        // Code Here
        int n=a.length();
        set<char> st;
        for(int i=0;i<n;i++)
        {
            st.insert(a[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            st.erase(a[i]);
            char b=*st.begin();
            if(st.empty())
             break;
             char ch=a[i];
            if(ch>b){
            for(int j=0;j<n;j++)
            {
                if(a[j]==ch)
                {
                    a[j]=b;
                }
                else if(a[j]==b)
                {
                    a[j]=ch;
                }
                
            }
            break;
            }
            
        }
        return a;
    }
    