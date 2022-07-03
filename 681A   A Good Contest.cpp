#include<bits/stdc++.h>
using namespace std;

struct contesttant
{
    string name;
    int bef;
    int aft;
};
int main()
{
    int n;
    cin>>n;
    struct contesttant c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i].name>>c[i].bef>>c[i].aft;
        if((c[i].aft>c[i].bef)&&c[i].bef>=2400)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
}
