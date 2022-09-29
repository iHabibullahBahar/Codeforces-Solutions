#include<bits/stdc++.h>
#define pb push_back 
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define all(v) (v).begin(),(v).end()
#define fl(i,a,b) for(int i=int(a);i<int(b);i++)
#define ll long long
using namespace std;
void solve()
{
    string str,h="hello";
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==h[count])count++;
        if(count==5)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}
