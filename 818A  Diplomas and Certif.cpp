#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,n_half;
    cin>>n>>k;
    n_half=n/2;
    long long equiation_maker=k+1;
    long long diploma_holder=n_half/equiation_maker;
    long long certificate_holder=diploma_holder*k;
    long long not_winner=n-(diploma_holder+certificate_holder);
    cout<<diploma_holder<<" "<<certificate_holder<<" "<<not_winner<<endl;
}
