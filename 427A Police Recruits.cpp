#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int police=0;
    int occor=0;
    int k,cy=0;

    //1 -1 1 -1 -1 1 1 1

    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k==-1)
        {

                    if(police<=0)
                    {
                        count++;
                    }
                    else if(police>0)
                    {
                        police--;
                    }

        }
        else if(k>0)
        {
            police=police+k;
        }
    }
    cout<<count<<endl;

}