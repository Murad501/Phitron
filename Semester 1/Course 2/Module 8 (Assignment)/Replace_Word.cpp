#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        string foundedString;
        int foundedStringSize = foundedString.size();

        for (int j = 0; j < s.size(); j++)
        {

            if (s[j] == x[foundedStringSize])
            {
                foundedString += s[j];
                foundedStringSize++;
                if (foundedString == x)
                {
                    foundedString = "";
                    foundedStringSize = 0;
                    cout << "#";
                }
                else if (s.size() - 1 == j)
                {
                    cout << foundedString;
                }
            }
            else
            {
                cout << foundedString;
                foundedString = "";
                foundedStringSize = 0;
                cout << s[j];
            }
        }
        cout << endl;
    }

    return 0;
}