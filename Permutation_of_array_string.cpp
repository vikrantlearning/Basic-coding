void permRec(vector<int>& nums, map<int,int> &mp,vector<int> &arr,vector<vector<int>> &ans)
    {
        if(arr.size()==nums.size())
        {
            ans.push_back(arr);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!mp[nums[i]])
            {
                mp[nums[i]]=1;
                arr.push_back(nums[i]);
                permRec(nums,mp,arr,ans);
                mp.erase(nums[i]);
                arr.pop_back();
            }
        }
    }
    void permRec2(int indx,vector<int>& nums,vector<vector<int>>&ans)
    {
        if(indx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=indx;i<nums.size();i++)
        {
            swap(nums[i],nums[indx]);
            permRec2(indx+1,nums,ans);
            swap(nums[i],nums[indx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        //map<int,int> mp;
        vector<int> arr;
        vector<vector<int>>ans;
        //permRec(nums,mp,arr,ans);
        int indx=0;
        permRec2(indx,nums,ans);
        
        return ans;
    }