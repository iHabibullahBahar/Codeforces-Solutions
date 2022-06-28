#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll  n_p,each_ap,p_sheet,p_pack,t_packs;
    cin>>n_p>>each_ap>>p_sheet>>p_pack;
    ll r_sheet_p;
    if(each_ap%p_sheet==0)
    {
        r_sheet_p=each_ap/p_sheet;
    }
    else{
        r_sheet_p=(each_ap/p_sheet)+1;
    }
    ll t_sheet=r_sheet_p*n_p;
    int i;
    for( i=1;;i++)
    {
        ll hudai=(i*p_pack)/t_sheet;
        if(hudai>0)
            break;
    }
    cout<<i<<endl;
}
