#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k;
    cin>>a>>b;
    k=0;
    while(true)
    {
        if(a>b)
        {
            break;
        }
        a*=3;
        b*=2;
        k++;
    }
    cout<<k<<endl;
}