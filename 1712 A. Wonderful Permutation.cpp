#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>vc(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>vc[i];
        //cout<<vc[i]<<' ';
        if((vc[i]>k)&&i<=k-1) count++;
        //if(i+1==k) break;
    }
    cout<<count<<endl;
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
