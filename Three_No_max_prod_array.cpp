//product of three numbers maximam
long long maxProduct(int arr[], int n) {
        // code here
     sort(arr,arr+n);
     long long a=(long long)arr[0]*arr[1]*arr[n-1];
     long long b=(long long)arr[n-3]*arr[n-2]*arr[n-1];
     return (long long)max(a,b);
    }