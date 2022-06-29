#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=0;
    int count_for_five=0;
    if(n%5==0)
    {
        count_for_five=n/5;
    }
    else
    {
        count_for_five=(n/5)+1;
    }
    cout<<count_for_five<<endl;
}