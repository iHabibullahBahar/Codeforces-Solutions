#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fl for(int i=0;i<n;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if((str[0]=='Y'||str[0]=='y')&&(str[1]=='E'||str[1]=='e')&&(str[2]=='S'||str[2]=='s')) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
