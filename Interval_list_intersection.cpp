//Interval List intersection
vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i=0,j=0;
        vector<vector<int>> ans;
        int n1=firstList.size();
        int n2=secondList.size();
        while(i<n1&&j<n2)
        {
            if(secondList[j][0]<=firstList[i][1]&&firstList[i][0]<=secondList[j][1]) //condition for having common intersection
            {
                int a=max(firstList[i][0],secondList[j][0]);
                int b=min(firstList[i][1],secondList[j][1]);
                ans.push_back({a,b}); 
            }
            if(firstList[i][1]<secondList[j][1])
            {
                i++;
            }
            else
                j++;
            
        }
        return ans;
    }