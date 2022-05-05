//Longest valid parenthesis.eg (()( ,ans=2   ()(())((), ans=6 0 to 5
int findMaxLen(string s) {
        // code here
        //Here in index stack we are storing the index of brackets for which we don't have closing
        //brackets yet. if we findd the closing brackets be it for ( or ). we pop it out of index stack
        //refer video by prakash shukla. Initially storing -1.For the case if we don't have any problem index
        stack<char> st;
        stack<int>indx;
        indx.push(-1);
        int n=s.length();
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                indx.push(i);
                //cout<<"wi"<<endl;
            }
            else
            {
                //cout<<"j"<<endl;
                if(!st.empty() and st.top()=='(')
                {
                    //cout<<"k"<<endl;
                    st.pop();
                    indx.pop();
                    mx=max(mx,i-indx.top());
                }
                else
                {
                    //cout<<"t"<<endl;
                    indx.push(i);
                }
            }
           // cout<<mx<<"->i"<<endl;
        }
        return mx;
    }