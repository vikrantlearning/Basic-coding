#include<iostream>
#include<vector>
using namespace std;
int b_search(int l,int hi,int key,vector<int> v)
{
    int flag=-1;
    if(v[hi]==key)
        return hi;
    else
        while(l<=hi)
        {
           int mid=(l+hi)/2;
           if(v[mid]==key)
            return mid;
           else if(key<v[mid])
           {
               hi=mid-1;
           }
              else
               l=mid+1;
            cout<<v[mid]<<"\n";

        }
    return flag;
}
int find(vector<int>v,int key)
{
    int l=0,hi=1;
    int curr=v[hi];
    while(curr<key)
    {
        l=hi;
        hi=2*hi;
        curr=v[hi];
        cout<<"l->"<<l<<","<<"hi->"<<hi<<"\n";
    }
    if(hi>v.size())
        hi=v.size();
    int index=b_search(l,hi,key,v);
    return index;
}
int main()
{
  vector<int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      v.push_back(3*i);
  }
  //cout<<v[18];
int key;
  cin>>key;
  int ans=find(v,key);
  cout<<ans;
}
