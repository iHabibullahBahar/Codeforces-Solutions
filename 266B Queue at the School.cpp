#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string st;
    cin>>st;
    for(int i=0;i<t;i++)
    {
        if(st[n-1]=='B')
        {
            n--;
        }
        for(int j=0;j<n-1;j++)
        {
            char temp;
            if(st[j]=='B'&&st[j+1]!='B')
            {
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
                j++;
            }
        }
    }
    cout<<st;
}