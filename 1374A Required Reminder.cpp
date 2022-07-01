#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t_case;
    cin>>t_case;
    while(t_case--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int k=((n-y)/x)*x+y;
        cout<<k<<endl;
    }
}