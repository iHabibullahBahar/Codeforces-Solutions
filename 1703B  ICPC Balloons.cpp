#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]!=str[i-1])
            count=count+2;
            else
            count++;
        }
        
        cout<<count<<endl;
    }
}
