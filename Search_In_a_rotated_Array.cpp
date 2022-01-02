 //Search In a rotated array
 int search(vector<int>& nums, int target) {
        int lo=0,mid,hi=nums.size()-1;
        int n=nums.size();
        //found the lowest element index-->also calculated number of rotation
        while(lo<hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi])
            {
                lo=mid+1;
            }
            else
            {
                hi=mid;
            }
        }
        int rot=lo;
        lo=0;
        hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            int real_mid=(mid+rot)%n;
            if(target==nums[real_mid])
                return real_mid;
            else
                if(nums[real_mid]>target)
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }
        }
        return -1;
        } 