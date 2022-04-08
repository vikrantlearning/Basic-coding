//Floyd warshall ->Used to calculate min dist b/w pair of nodes

void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	    for(int k=0;k<n;k++)
	    {
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<n;j++)
	            {
	                if(matrix[i][k]!=-1 and matrix[k][j]!=-1)
	                {
	                    if(matrix[i][j]!=-1)
	                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
	                    else
	                     matrix[i][j]=matrix[i][k]+matrix[k][j];
	                }
	            }
	        }
	    }