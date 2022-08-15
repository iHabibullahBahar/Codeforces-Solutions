#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=pow(2,i);
        if(n%sum==0&&i>0)
        {
            cout<<n/sum<<endl;
            return;
        }
    }
}
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        solve();
    }
}
