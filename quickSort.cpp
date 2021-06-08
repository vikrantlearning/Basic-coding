#include <iostream>

using namespace std;
int partition(int arr[],int l,int r)
{
    //finds position of pivot and returns it after arranging it in its place
    int pivot=arr[r];//last elsement taken as pivot here
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);//i stops b4 any element greater than pivot and later exchanges(swaps) with first element smallr than pivot
        }
    }
    swap(arr[i+1],arr[r]);//i+1 is index of first element greater than pivot
    return i+1;
}
void quicksort(int arr[],int l,int r)
{
    int pivot;
    if(l<r){
    pivot=partition(arr,l,r);
    quicksort(arr,l,pivot-1);//sorting b4 pivot 
    quicksort(arr,pivot+1,r);//sorting after pivot
    }
}
int main()
{
	//has time complexity OlogN;
    int arr[7]={4,2,1,6,11,19,9};
    quicksort(arr,0,7-1);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";

    return 0;
}
