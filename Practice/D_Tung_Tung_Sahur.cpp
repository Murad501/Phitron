#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s, p;
    cin >> s >> p;
    int lc = 0, rc = 0, plc = 0, prc = 0;
    for (char c : s)
    {
        if (c == 'L')
            lc++;
        else
            rc++;
    }
    for (char c : p)
    {
        if (c == 'L')
            plc++;
        else
            prc++;
    }
    if (rc == 0 && prc == 0)
    {
        if (plc <= 2 * lc && s.size() <= p.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    if (lc == 0 && plc == 0)
    {
        if (prc <= 2 * rc && s.size() <= p.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (s == p)
    {
        cout << "YES" << endl;
        return;
    }
    int n = s.size(), m = p.size();
    int flag = true;
    while (n && m)
    {
        if (s[n - 1] == p[m - 1])
        {

            if (s[n - 1] == p[m - 2] && s[n - 2] != s[n - 1])
            {
                n--;
                m -= 2;
            }
            else
            {
                n--;
                m--;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }

    if ((flag && m == 0 && n == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}