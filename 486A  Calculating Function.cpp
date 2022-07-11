#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n;
    cin>>n;
    //O(1)
    ll ans;
    if(n%2==0) ans=n/2;
    else ans=(n/2+1)*-1;
    cout<<ans<<endl;
    //O(n)
    //int sum=0;
    // for(int i=1;i<=n;i++)
    //     sum=sum+(pow(-1,i)*i);
    //cout<<sum<<endl;

    
}
//f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
