#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(true)
    {
        if(n==0)break;
        if(n%100==0)
        {
            count++;
            n-=100;
        }
        else if(n%20==0)
        {
            count++;
            n-=20;
        }
        else if(n%10==0)
        {
            count++;
            n-=10;
        }
        else if(n%5==0)
        {
            count++;
            n-=5;
        }
        else if(n%10<5)
        {
            count+=n%10;
            n-=n%10;
        }
        else if(n%10<10)
        {
            int cr=((n%10)-5);
            count=count+(cr);
            n-=cr;
        }

    }
    cout<<count<<endl;
}