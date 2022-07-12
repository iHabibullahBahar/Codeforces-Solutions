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
        int k,count=0,l=n;
        if(n%2==1)
            k=((n%10)/2*20);
        else
            k=(((n%10)/2)*20)-10;
        while(l)
        {
            l/=10;
            count++; 
        }
        //cout<<count<<endl;
        if(count==1) k=k+1;
        else if(count==2) k=k+3;
        else if(count ==3)k=k+6;
        else if(count==4)k=k+10;
        cout<<k<<endl;

    }
}
