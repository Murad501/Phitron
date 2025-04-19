#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;

    int sz = s.size();
    if (s.size() == 1)
    {
        if (s[0] != 'z')
            s.push_back(s[0] + 1);
        else
            s.push_back(s[0] - 1);

        cout << s << endl;
    }
    else
    {
        for (int i = 1; i < sz; i++)
        {
            if (s[i - 1] == s[i])
            {
                if (s[i] != 'z')
                    s.insert(i, 1, s[i - 1] + 1);
                else
                    s.insert(i, 1, s[i - 1] - 1);
                break;
            }
        }
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}