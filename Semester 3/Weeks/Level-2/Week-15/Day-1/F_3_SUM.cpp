#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        char c = s[s.size() - 1];
        int v = c - '0';
        mp[v]++;
    }

    bool ok = false;
    for (int i = 0; i < 10; i++)
    {
        if (mp[i] == 0)
        {
            continue;
        }
        for (int j = 0; j < 10; j++)
        {
            if ((i == j && mp[j] < 2) || mp[j] == 0)
            {
                continue;
            }
            for (int k = 0; k < 10; k++)
            {
                if ((j == k && mp[k] < 2) || (i == k && mp[k] < 2) || (i == j && j == k && mp[k] < 3) || mp[k] == 0)
                {
                    continue;
                }
                int sum = i + j + k;
                if (sum == 3 || sum == 13 || sum == 23)
                {
                    // cout << sum << nl;
                    // cout << i << " " << j << " " << k << nl;
                    ok = true;
                }
            }
            if (ok)
            {
                break;
            }
        }
        if (ok)
        {
            break;
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}