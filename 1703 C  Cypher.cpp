#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fl for(int i=0;i<n;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l=n;
        int i=0;
        while(l--)
        {
            int r;
            cin>>r;
            
            int u=0,d=0;
            while(r--)
            {
                char k;
                cin>>k;
                if(k=='U') u--;
                else d++;  
            }
            arr[i]=(arr[i]+u+d)%10;
            if(arr[i]<0)
            arr[i]=10+arr[i];
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
}
