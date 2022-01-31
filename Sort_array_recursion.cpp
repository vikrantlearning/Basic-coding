#include<bits/stdc++.h>
using namespace std;
void ins(vector<int> &v,int t)
{
    if(v[v.size()-1]<=t||v.size()==0)
    {
     v.push_back(t);
     return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    ins(v,t);
    v.push_back(temp);
    return;
}
void solve(vector<int> &v)
{
    if(v.size()==1)
        return;

    int t=v[v.size()-1];
    v.pop_back();
    solve(v);
    ins(v,t);
    //return;
}

int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(2);
    v.push_back(2);
    solve(v);
    for(int i=0;i<7;i++)
        cout<<v[i]<<" ";
}
