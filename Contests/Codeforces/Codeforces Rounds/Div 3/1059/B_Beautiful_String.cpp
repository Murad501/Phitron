// 17/10/2025 20:43
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

    bool ok = true;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            ok = false;
            break;
        }
        l++, r--;
    }
    if (ok)
    {
        zero;
        cout << nl;
    }
    else
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << nl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
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