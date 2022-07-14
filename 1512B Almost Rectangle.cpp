#include<bits/stdc++.h>
using namespace std;

struct dotdot{
    string str;
};
void compute()
{
    
    int n;
    cin>>n;
    struct dotdot dot[n];
    for(int i=0;i<n;i++)
    {
        cin>>dot[i].str;
    }
    
    int fl=-1,ll=-1,fa=-2,la=-2;
    int d=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(dot[i].str[j]=='*')
            {
                if(fa==-2)
                {
                    fl=i;
                    fa=j;
                }
                else
                {
                    ll=i;
                    la=j;
                }
            }
        }
    }
    if(fl==ll)
    {
        if(fl==n-1)
        {
            fl-=1;
            ll-=1;
        }
        else
        {
            ll=ll+1;
            fl+=1;
        }
        
    }
    if(fa==la)
    {
        if(fa==n-1)
        {
            fa-=1;
            la-=1;
        }
        else
        {
            fa++;
            la++;
        }
    }
    for(int i=0;i<n;i++)
    {
        
            if(i==fl)
            {
                dot[i].str[la]='*';
            }
            if(i==ll)
            {
                dot[i].str[fa]='*';
            }
    }
    for(int i=0;i<n;i++)
    {
        cout<<dot[i].str<<endl;
    }
    
    
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
