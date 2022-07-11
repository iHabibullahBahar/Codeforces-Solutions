#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        int count=0;
        for(int i=0;i<3;i++)
        {
            ll b;
            cin>>b;
            if(a<b)
            count++;
        }
        cout<<count<<endl;
    }
}
