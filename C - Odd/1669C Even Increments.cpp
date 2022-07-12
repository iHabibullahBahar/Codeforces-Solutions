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
        int oie=0,oio=0,eio=0,eie=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(i%2==1)
            {
                if(arr[i]%2==0) oie++;
                else oio++;
            }
            else
            {
                if(arr[i]%2==0) eie++;
                else eio++;
            }
        }

        if(((oie+eio)==n)||((oie+eie==n))||((oio+eio==n))||((oio+eie==n)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
