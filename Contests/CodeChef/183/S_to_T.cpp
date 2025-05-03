// 23/04/2025 20:42
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
    string s, t;
    cin >> s >> t;
    int found = -1;
    bool ok = true;
    vector<int> ans, ans2;
    for (int i = 0; i < n; i++)
    {
        if (found == -1)
        {
            if (s[i] != t[i])
            {
                ok = false;
                break;
            }
            else if (s[i] == '1')
            {
                found = i;
            }
        }
        else
        {

            if (s[i] == '0')
            {
                ans.push_back(i);
                s[i] = '1';
            }
        }
    }

    if (!ok)
    {
        minus;
    }
    else
    {

        for (int i = n - 1; i >= 1; i--)
        {
            if (s[i] != t[i])
            {
                ans2.push_back(i);
            }
        }
        cout << ans.size() + ans2.size() << nl;
        int sz = ans.size();
        for (int i = 0; i < sz; i++)
        {
            cout << ans[i] << " ";
        }
        sz = ans2.size();
        for (int i = 0; i < sz; i++)
        {
            cout << ans2[i] << " ";
        }
        cout << nl;
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