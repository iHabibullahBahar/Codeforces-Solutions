#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin>>name;
    sort(name.begin(),name.end());
    int stlen=name.length();
    int i=0;
    int count=0;
    for(i=0;i<stlen-1;i++)
    {
        if(name[i]==name[i+1])
          {
            count++; 
          } 
    }
    stlen-=count;
    if(stlen%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}