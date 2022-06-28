//B. Vlad and Candies
//HabibullahBahar

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int i=1;
        for(;i<=n;i++)
        {
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        if(((n==1)&&arr[1]==1))
        {
            cout<<"YES"<<endl;
        }
        else if(((n==1)&&arr[1]!=1))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(arr[n]-arr[n-1]<=1)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        
    }
}
