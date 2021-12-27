//Minimum swaps required to sort an array
int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int> s_arr;//sorted_Array
	    map<int,int>mp;//map for arrray element with 
	    int cnt=0;
	    for(int i=0;i<nums.size();i++)
	    mp[nums[i]]=i;
	    
	    s_arr=nums;
	    sort(s_arr.begin(),s_arr.end());
	    for(int i=0;i<nums.size();i++)
	    {
	        if(nums[i]!=s_arr[i])
	        {
	            cnt++;
	            swap(nums[i],nums[mp[s_arr[i]]]);
	            swap(mp[nums[i]],mp[nums[mp[s_arr[i]]]]);
	        }
	    }
	    return cnt;
	}