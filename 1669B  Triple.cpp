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
        int k;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            
            cin>>arr[i];
        }
        int size= sizeof(arr)/sizeof(int);
        sort(arr,arr+size);
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==arr[i-1]&&arr[i]==arr[i-2])
            {
                k=arr[i];
                flag=1;
                break;
                
            }
        }

        if(flag==1)
        cout<<k<<endl;
        else
        cout<<-1<<endl;
    }
}
