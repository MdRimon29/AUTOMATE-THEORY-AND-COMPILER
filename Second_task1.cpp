#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int n=s.length();
    //int count=0;

    if(n<3)
    {
        cout<<"String will not accepted"<<endl;
    }
    else{
        for(int i=0; i<n-2; i++)
        {
            if(s[0] != 'a')
            {
                cout<<"String will not accepted"<<endl;
                break;
            }
            if(s[n-3]=='a' && s[n-2]=='b' && s[n-1]=='a')
            {
                cout<<"String will be accepted"<<endl;
                break;
            }
            else if(i==n-3)
            {
                cout<<"String will not accepted"<<endl;
            }
        }
    }
}