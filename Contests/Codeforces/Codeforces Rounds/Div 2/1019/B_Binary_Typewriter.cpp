// 21/04/2025 20:39
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    char c = '0';

    int zIdx = -1;

    int zCnt = 0;

    vector<int> zIdxs, oIdxs;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == '0')
        {
            zIdxs.push_back(i);
            zCnt++;
        }
        else
        {
            oIdxs.push_back(i);
        }

        if (s[i] == c)
        {
            ans++;
        }
        else
        {
            ans += 2;
            if (c == '0')
            {
                c = '1';
            }
            else
            {
                c = '0';
            }
        }
    }

    bool ok = false;
    for (int i = 1; i < oIdxs.size(); i++)
    {
        if (oIdxs[i] - oIdxs[i - 1] > 1)
        {
            ans -= 2;
            ok = true;
            break;
        }
    }

    if (!ok)
    {
        for (int i = 1; i < zIdxs.size(); i++)
        {
            if (zIdxs[i] - zIdxs[i - 1] > 1)
            {
                ans -= 1;
                ok = true;
                break;
            }
        }
    }

    if (!ok)
    {
        if (s[0] == '1' && zCnt > 0)
        {
            ans -= 1;
        }
    }

    cout << ans << nl;
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