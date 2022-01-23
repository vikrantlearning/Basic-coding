//row with maximam 1
 int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int j=M-1;
            int row=0;
            while(j>=0&&Mat[0][j]==1)
            {
                j--;
            }
            
            for(int i=1;i<N;i++)
            {
                while(j>=0&&Mat[i][j]==1)
                {
                    j--;
                    row=i;
                }
            }
            return row;
        }