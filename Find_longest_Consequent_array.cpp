 //Find Longest Consequence
 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int seq=0;
      int max_seq=0;
      map<int,int>mp;
      for(int i=0;i<N;i++)
      mp[arr[i]]=1;
      
      int i=0;
      for(auto it=mp.begin();it!=mp.end() ;it++)
      {
         int a=it->first;
         it++;
         int b=it->first;
         it--;
         if(b-a==1)
           seq++;
          else
          {
              max_seq=max(max_seq,seq+1);
              seq=0;
          }
          i++;
      }
      return max_seq;
    }