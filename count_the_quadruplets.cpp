//count the quadruplets
int countQuadruplets(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                for(int k=j-1;k>=0;k--)
                {
                    int s=nums[i]+nums[j]+nums[k];
                    if(mp[s])
                    {
                        ans=ans+mp[s];
                    }
                }
            }
            mp[nums[i]]++;
        }
        return ans;
    }