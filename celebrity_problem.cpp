int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
		//will push every candidate to stack
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
		
        while(st.size()>=2)
        {
		  //taking top two persons at a time
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(M[a][b]==1)//A Knows B => A is not a celebrity
            {
                st.push(b);
            }
            else //A does not knows B => B is not a celebrity
            {
                st.push(a);
            }
        }
        int pot=st.top();  //  last remaining person who is a potential candidate who may not be known to everyone
        st.pop();
        for(int i=0;i<n;i++)
        {
            if(i!=pot)// Checking if potential knows someone or is unknown to to ant candidate. Making potential person invalid as a celebrity
            {
                if(M[pot][i]==1||M[i][pot]==0)
                return -1;
            }
        }
        return pot;
    
    }