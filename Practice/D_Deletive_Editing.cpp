// 12/08/2025 19:05
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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    map<char, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]].push_back(i);
    }

    bool ok = true;
    int currIdx = -1;
    for (int i = 0; i < m; i++)
    {
        char c = b[i];
        int cnt = 0;
        for (int j = i + 1; j < m; j++)
        {
            if (b[j] == c)
            {
                cnt++;
            }
        }

        vector<int> idxs = mp[c];
        reverse(all(idxs));
        if (idxs.size() <= cnt)
        {
            ok = false;
            break;
        }
        else
        {
            if (currIdx == -1)
            {
                currIdx = idxs[cnt];
            }
            else
            {
                if (currIdx > idxs[cnt])
                {
                    ok = false;
                    break;
                }
                else
                {
                    currIdx = idxs[cnt];
                }
            }
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
    // cout << a << " " << b << nl;
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