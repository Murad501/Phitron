// 13/04/2025 22:26
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string p, s;
    cin >> p >> s;

    int n = p.size();
    int m = s.size();

    vector<string> pp, ss;
    string t;
    t.push_back(p[0]);
    if (n == 1)
    {
        pp.push_back(t);
    }

    for (int i = 1; i < n; i++)
    {
        if (p[i] != p[i - 1])
        {
            pp.push_back(t);
            t = "";
            t.push_back(p[i]);
            if (i == n - 1)
            {
                pp.push_back(t);
            }
        }
        else
        {
            t.push_back(p[i]);
            if (i == n - 1)
            {
                pp.push_back(t);
            }
        }
    }

    t = "";
    t.push_back(s[0]);
    if (m == 1)
    {
        ss.push_back(t);
    }

    for (int i = 1; i < m; i++)
    {

        if (s[i] != s[i - 1])
        {

            ss.push_back(t);
            t = "";
            t.push_back(s[i]);
            if (i == m - 1)
            {
                ss.push_back(t);
            }
        }
        else
        {
            t.push_back(s[i]);

            if (i == m - 1)
            {
                ss.push_back(t);
            }
        }
    }

    if (pp.size() != ss.size())
    {
           no;
    }
    else
    {
        bool flag = true;
        int sz = pp.size();
        for (int i = 0; i < sz; i++)
        {
            int a = pp[i].size();
            int b = ss[i].size();
            if ((b < a || b > a * 2) || pp[i][0] != ss[i][0])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}