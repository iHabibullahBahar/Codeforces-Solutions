#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,n;
    cin>>n;
    while(n)
    {
        string str;
        cin>>str;
        if(str=="X++"||str=="++X")
        x++;
        else if(str=="X--"||str=="--X")
        x--;
        n--;
    }
    cout<<x<<endl;
}
