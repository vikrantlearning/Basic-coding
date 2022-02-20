//Next Permutation
//Simple Logic
//1. Find the index where increasing order from reverse is breaking eg 1,4,3,2-->Here at 1 is breaking
//2. Next find the first element from reverse who is bigger than 1. Swap these two----> 2,4,3,1
//3 Now Reverse the array till the index in point 1. Here we will reverse the array till 4---> 2,1,3,4
void nextPermutation(vector<int>& nums) {
    
        int n=nums.size();
        int flag=0;
        int ind=0;
        int ind2=0;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                flag=1;
                ind=i-1;
                break;
            }   
        }
        if(flag==1)
        {
        for(int i=n-1;i>=0;i--)
        {
            if(nums[ind]<nums[i])
            {
                ind2=i;
                break;
            }
        }
        swap(nums[ind],nums[ind2]);
        reverse(nums.begin()+ind+1,nums.end());
        }
        else
        {
            reverse(nums.begin(),nums.end());
        }
    
        
    }