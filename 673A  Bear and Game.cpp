#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int k=0;
    int t_min=0;
    int ind_min;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        ind_min=arr[i]-k;
        if(ind_min>15)
        {
            t_min=(15)+t_min;
        }
        else
        {
            t_min=(ind_min)+t_min;
        }
        

        
        if(ind_min>15)
        {
            break;
        }
        k=arr[i];
    }
            if((arr[n]>=75)&&ind_min<=15)
        {
            int l=90-arr[n];
            t_min=l+t_min;
        }
        else if((ind_min<=15)&&arr[n]<75)
        {
            t_min=t_min+15;
        }
    cout<<t_min<<endl;
}
