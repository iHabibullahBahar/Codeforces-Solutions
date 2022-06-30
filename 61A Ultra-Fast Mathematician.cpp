#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int len=a.length();
    char arr[len+1];
    for(int i=0;i<len;i++)
    {
        if(a[i]==b[i])
            {arr[i]='0';}
        else
        {
            arr[i]='1';
        }
        
    }
    arr[len]='\0';

    cout<<arr<<endl;
}