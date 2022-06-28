#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char word[101];
        cin>>word;
        string copyWord=word;
        int len = copyWord.length();

        if(len>10)
        {
            char st=word[0];
            char end=word[len-1];
            cout<<st<<len-2<<end<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
}