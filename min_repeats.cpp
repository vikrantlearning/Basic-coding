//Number of Min Repeats of A such that B becomes substring of A.

int minRepeats(string A, string B) {
        // code here
        int m=A.length();
        int n=B.length();
        int count;
        //bool found=false;
        for(int i=0;i<m;i++)
        {
          int j=i;
          count=1;
          int k=0;
          //checking whther A exists in B Example A=abcd, B=cdabcdab , abcdabcdabcd(3 times A)
          while(k<n&&A[j]==B[k])
          {
              if(k==(n-1))
               return count;
              
              j=(j+1)%m;
              
              if(j==0)
               count++;
               
              k++;
          }
        }
        return -1;
    }
