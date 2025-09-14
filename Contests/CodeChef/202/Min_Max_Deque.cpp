// 03/09/2025 21:32
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
    int n, q;
    cin >> n >> q;
    vector<int> v;
    vector<pair<int, int>> qu;
    vector<pair<int, int>> ans;
    int mx, mn;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (i == 0)
        {
            mx = x, mn = x;
            ans.push_back({mn, mx});
        }
        else
        {
            if (i % 2 == 0)
            {

                ans.push_back({x, ans[i - 1].second});
            }
            else
            {

                ans.push_back({ans[i - 1].first, x});
            }
        }
    }
    cout << min(ans[n - 1].first, ans[n - 1].second) << " ";

    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 1)
        {
            ans[a - 1] = {b, ans[a - 1].second};
        }
        else
        {
            ans[a - 1] = {ans[a - 1].first, b};
        }

        for (int j = a; j < n; j++)
        {
            if (j % 2 == 1)
            {
                ans[j] = {ans[j].first, b};
            }
            else
            {
                ans[j] = {b, ans[j].second};
            }
        }
        cout << min(ans[n - 1].first, ans[n - 1].second) << " ";
    }

    cout << nl;
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