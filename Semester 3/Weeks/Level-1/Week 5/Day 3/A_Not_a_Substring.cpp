#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "()")
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
            int starting = 0;
            int closing = 0;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == '(')
                {
                    starting = max(starting, 1);
                }
                if (s[i] == ')')
                {
                    closing = max(closing, 1);
                }

                if (s[i] == '(' && s[i + 1] == '(')
                {
                    starting = 2;
                }

                if (s[i] == ')' && s[i + 1] == ')')
                {
                    closing = 2;
                }
            }

            if (starting > 1 || closing > 1)
            {
                for (int i = 1; i <= s.size(); i++)
                {
                    cout << "()";
                }
            }
            else
            {
                for (int i = 1; i <= s.size(); i++)
                {
                    cout << "(";
                }
                for (int i = 1; i <= s.size(); i++)
                {
                    cout << ")";
                }
            }
            cout << nl;
        }
    }
    return 0;
}