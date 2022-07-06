#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,p;
        cin>>a>>b>>c>>p;
        ll m=max(a,max(b,c));
        ll i=(m-a)+(m-b)+(m-c);
        if((p-i)%3==0&&(p-i)>=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
