// 12/11/2025 20:36
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int on = 0, ze = 0;

    for (int i = 0; i < n - 1; i++)
    {

        if (s[i] == s[i + 1])
        {
            if (s[i] == '0')
            {
                ze++;
            }
            else
            {
                on++;
            }
        }
    }

    if (on >= ze)
    {
        zero;
    }
    else
    {
        vector<int> indexes;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                indexes.push_back(i);
            }
        }

        if (indexes.size() == 0)
        {
            cout << n / 2 << nl;
        }
        else
        {
            int ans = 0;
            while (on < ze)
            {
                on++;
                ze--;
                ans++;
            }

            int sz = indexes.size();
            for (int i = 0; i < sz - 1; i++)
            {
                int diff = (indexes[i + 1] - indexes[i]);
                if (diff > 2 && diff & 1)
                {
                    if (indexes[i] == 0)
                    {
                        if (s[indexes[i + 1] + 1] == '0')
                        {
                            ans++;
                        }
                    }
                    else if (indexes[i] == n - 1)
                    {
                        if (s[indexes[i - 1] - 1] == '0')
                        {
                            ans++;
                        }
                    }
                    else
                    {
                        if (s[indexes[i - 1] - 1] == '0' && s[indexes[i + 1] + 1] == '0')
                        {
                            ans++;
                        }
                    }
                }
            }
            cout << ans << nl;
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