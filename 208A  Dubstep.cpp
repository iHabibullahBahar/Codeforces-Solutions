#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    int flag=-1,k=0,cnt=0;
    string st;
    for(int i=0;i<str.length();i++)
    {
        if((str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'))
        {
            i+=2;
            flag+=1;
            if(str.substr(0,3)!="WUB") flag++;
            if(flag>0)cnt=1;
        }
        else 
        {
            
            if(cnt==1)
            {cout<<' ';
            cnt=0;
            }
            cout<<str[i];
        }
    }
}
int main()
{
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        solve();
    }
}
