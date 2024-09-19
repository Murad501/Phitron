#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        stack<char> s;
        string str;
        getline(cin, str);

        for (char c : str)
        {

            if (!s.empty() && s.top() == '0' && c == '1')
            {
                s.pop();
            }
            else
            {
                s.push(c);
            }
        }

        if (!s.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}