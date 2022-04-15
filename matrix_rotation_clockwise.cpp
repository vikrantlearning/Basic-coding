//Rotate matrix clockwise
void rotate(vector<int> &row)
    {
        int n=row.size();
        for(int i=0;i<n/2;i++)
        {
            swap(row[i],row[n-1-i]);
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            rotate(matrix[i]);
        }
    }