#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f_h;
    cin>>n>>f_h;
    int width=0;
    while(n)
    {
        int h;
        cin>>h;
        if(h>f_h)
        {
            if(h%f_h==0)
                width=width+(h/f_h)-1;
            else
                width=width+(h/f_h);
        }
        width++;
        n--;
    }
    cout<<width<<endl;
}
