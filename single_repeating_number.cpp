//Code for single number in a two times repeating array for eg-5,9,21,3,5,21,3, 9 is the single elements and rest are 2 times repeating

int singleNumber(vector<int>& nums) {
        vector<int> f(32,0);
        int n=nums.size();
        for(int e:nums)
        {
            for(int j=0;j<32;j++)
            {
                if(e&(1<<j))
                    f[j]++;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if(f[i]%2==1)
                ans=ans+(1<<i);
        }
        return ans;
    }