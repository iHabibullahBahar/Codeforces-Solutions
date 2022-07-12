#include<bits/stdc++.h>
using namespace std;

void compute()
{
    int n;
    cin>>n;
    if(n>=1900)cout<<"Division 1"<<endl;
    else if(n>=1600)cout<<"Division 2"<<endl;
    else if(n>=1400)cout<<"Division 3"<<endl;
    else cout<<"Division 4"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        compute();
    }
}
