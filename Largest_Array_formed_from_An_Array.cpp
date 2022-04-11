//Compare string to formed from an array
static int myCompare(string X, string Y)
	{
	    string XY = X.append(Y);
	    string YX = Y.append(X);
	    return (XY > YX);
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    sort(arr.begin(), arr.end(), myCompare);
	    //->Internally This will sort the as per the combinations formed 
	    //For eg 1st loop
	    // 330 303 ->No Sorting
	    // 334 343 ->swapping of 34 and 3
	    // 345 534 ->Swapping of 5 and 34
	    // 59 95  -> swapping of 5 and 9
	    string ans;
	    for(int i = 0; i < arr.size(); i++)
	        ans.append(arr[i]);
	        
	    return ans;
	   }