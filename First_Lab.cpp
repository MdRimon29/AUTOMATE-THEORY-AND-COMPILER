#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    bool flag = false;
    int n = s.length();

    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == 'c') 
        {
            flag = true;
            break;
        }
    }

    if (flag == true) 
    {
        cout << "String contains a 'c'" << endl;
    }

    for (int i = 0; i < n - 2; i++) 
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'b') 
        {
            cout << "String contains a substring 'abb'" << endl;
            break;
        }
    }

    if (n % 2 == 0) 
    {
        cout << "The string contains even length" << endl;
    } 
    else 
    {
        cout << "The string contains odd length" << endl;
    }

    if (s[n - 1] == 'e') 
    {
        cout << "String ends with 'e'" << endl;
    } 
    else 
    {
        cout << "String doesn't end with 'e'" << endl;
    }

    return 0;
}