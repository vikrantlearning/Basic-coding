//Longest Subsequence
class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int lis[n];
       lis[n-1]=1;
       
       for(int i=n-2;i>=0;i--)
       {
           lis[i]=1;
           for(int j=i+1;j<n;j++)
           {
               if(a[i]<a[j]&&lis[i]<lis[j]+1)
               {
                   lis[i]=lis[j]+1;
               }
           }
       }
       return *max_element(lis,lis+n);
    }
};

{0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15}-->For last element The longest subsequence will be 1 as last element is itself will be counted in it.
//For The second last element if it is smaller than last element the longest subsequence will be lis[second_last]=lis[last]+1;
//for third smallest if it is smaller than second last element lis[third_last]=lis[second_last]+1;