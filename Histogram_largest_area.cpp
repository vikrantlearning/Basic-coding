//Largest Rectangle in histogram
int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        long long lb[n],rb[n];
        stack<long long> st,st2;
        st.push(n-1);
        rb[n-1]=n;
        //finding next smaller in right of array element
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() and heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            
            if(st.empty())
            {
                rb[i]=n;
                //st.push(i);
            }
            else
            {
                rb[i]=st.top();
                //st.push(i);
            }
            st.push(i);
        }
        
        lb[0]=-1;
        st2.push(0);
        //finding next smaller in left of array element
        for(int i=1;i<n;i++)
        {
            while(!st2.empty() and heights[i]<=heights[st2.top()])
            {
                st2.pop();
            }
            if(st2.empty())
            {
                lb[i]=-1;
                //st.push(i);
            }
            else
            {
                lb[i]=st2.top();
                //st.push(i);
            }
            st2.push(i);
        }
        long long maxArea=0;
        for(int i=0;i<n;i++)
        {
            maxArea=max((rb[i]-lb[i]-1)*heights[i],maxArea);
        }
        return maxArea;
    }