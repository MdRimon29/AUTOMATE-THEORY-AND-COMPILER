//Code for NFA

#include <iostream>
using namespace std;

bool isAStar(const string& str)
{
    for (char ch : str)
    {
        if (ch != 'a') return false;
    }
    return true;
}

bool isABPlus(const string& str)
{
    bool flag=false;
    int i = 0;
    while (i < str.length() && str[i] == 'a')
    {
        i++;
    }
    if(i < str.length() && str[i] == 'b')
    {
        flag=true;
    }
    return flag;
}

int main()
{
    string input;
    cout << "Enter a String: ";
    cin >> input;

    if (isAStar(input))
    {
        cout << input << " is accepted under rule 'a*'" << endl;
    }
    else if (input == "abb")
    {
        cout << input << " is accepted under rule 'abb'" << endl;
    }
    else if (isABPlus(input))
    {
        cout << input << " is accepted under rule 'a*b+'" << endl;
    }

    else
    {
        cout << input << " does not match any given rule" << endl;
    }

    return 0;
}