#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int n=s.length();
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    if(count<2)
    {
        cout<<"String not accepted"<<endl;
    }
    else if(s[n-2]=='a' && s[n-1]=='b')
    {
        if(count%2==0)
        {
            cout<<"String will be accepted"<<endl;
        }
    }
    else{
        cout<<"String not accepted"<<endl;
    }
}