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
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int k=0;
        
        for(int i=1;i<=n;i++)
        {
            int count=0;
            for(int j=1;j<=n;j++)
            {
                if(arr[i]!=arr[j])
                {
                   count++;
                }
            }
            if(count==(n-1))
            {
                k=i;
                break;
            }
        }
        cout<<k<<endl;
    }
}
