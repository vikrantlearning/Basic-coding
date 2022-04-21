//Input: s = "ababcbacadefegdehijhklij"
//Output: [9,7,8]
//Explanation:
//The partition is "ababcbaca", "defegde", "hijhklij".
//This is a partition so that each letter appears in at most one part.
//A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.

vector<int> partitionLabels(string s) {
       int maxi=0,prev=-1;
        map<char,int> last_index;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            last_index[s[i]]=i;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,last_index[s[i]]);
            //time for partition
            if(i==maxi)
            {
                ans.push_back(maxi-prev);
                prev=maxi;
            }
        }
        return ans;
    }