// 27/07/2025 20:46
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    string ans;
    int l = 0, r = n - 1;
    bool ok = true;
    while (l < r)
    {
        if (ok)
        {
            if (v[l] > v[r])
            {
                ans.push_back('L');
                ans.push_back('R');
                l++, r--;
            }
            else
            {
                ans.push_back('R');
                ans.push_back('L');
                l++, r--;
            }
        }
        else
        {
            if (v[l] < v[r])
            {
                ans.push_back('L');
                ans.push_back('R');
                l++, r--;
            }
            else
            {
                ans.push_back('R');
                ans.push_back('L');
                l++, r--;
            }
        }
        ok = !ok;
    }
    if (n % 2 == 1)
    {
        ans.push_back('L');
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