#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        
    }
    int ct=0;
    int ind;
    for(int i=1;i<=n;i++)
    {
        if((arr[i]>0))
        {
            ct++;
        }
        if(ct==k)
        {
            ind=i;
            break;
        }
    }
    for(int i=ind+1;i<=n;i++)
    {
        if((arr[ind]==arr[i])&&(arr[i]!=0))
        {
            ct++;
        }
        
    }
    cout<<ct<<endl;
}
