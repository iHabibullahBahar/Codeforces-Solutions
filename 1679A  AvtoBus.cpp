#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x ,y;
        if(n>=4)
        {
            if((n%6==0))
            {
                x=n/6;
            }
            else if(n%6==4)
            {
                x=(n/6)+1;
            }
            else if(n%6==2)
            {
                x=(n/6)+1;
            }
            else
                x=-1;
            if((n%4==0))
            {
                y=n/4;
            }
            else if(n%4==2)
            {
                y=(n/4);
            }
            else
            {
                y=-1;
            }
        }
        else
        y=-1;
        if(((x!=-1)&&(y!=-1)))
        {
            cout<<x<<" "<<y<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
