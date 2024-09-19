#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string egypt = "EGYPT";
    string foundedString;
    int foundedStringSize = foundedString.size();

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == egypt[foundedStringSize])
        {
            foundedString += s[i];
            foundedStringSize++;
            if (foundedString == egypt)
            {
                foundedString = "";
                foundedStringSize = 0;
                cout << " ";
            }
            else if (s.size() - 1 == i)
            {
                cout << foundedString;
            }
        }
        else
        {
            cout << foundedString;
            foundedString = "";
            foundedStringSize = 0;
            cout << s[i];
        }
    }

    return 0;
}