#include<iostream>
using namespace std;
//Find Right_max and left_max for each element.
int trappingWater(int arr[], int n){
        // code here
        int l_max[n];
        int r_max[n];
        int water=0;
        if(n<=2)
         return 0;
        l_max[0]=0;
        r_max[n-1]=0;
        int maxval=arr[0];
        cout<<"maxVal"<<"\n";
        for(int i=1;i<n;i++)
        {
            l_max[i]=maxval;
            maxval=max(maxval,arr[i]);
            cout<<l_max[i]<<" ";
        }
        cout<<"\n"<<"minVal";
        maxval=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r_max[i]=maxval;
            maxval=max(maxval,arr[i]);
            cout<<r_max[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<(min(l_max[i],r_max[i])-arr[i])<<"\n";//amount of water contained by one place
            int curr=max(0,min(l_max[i],r_max[i])-arr[i]);
            //cout<<curr<<"\n";
            water=water+max(0,min(l_max[i],r_max[i])-arr[i]);

        }
        return water;
    }
int main()
{
int arr[7]={8,8,2,4,5,5,1};
int ans=trappingWater(arr,7);
cout<<ans<<"\n";
return 0;
}
