// 01/07/2025 21:14
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

    vector<pair<int, int>> left;
    vector<pair<int, int>> right(n);

    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
        left.push_back({mn, mx});
    }
    mx = INT_MIN, mn = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {

        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
        right[i] = {mn, mx};
    }

    string s;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {

            s.push_back('1');
        }
        else if (i == (n - 1))
        {
            s.push_back('1');
        }
        else
        {

            if ((left[i - 1].first > v[i] || right[i + 1].second < v[i]))
            {
                s.push_back('1');
            }
            else
            {
                s.push_back('0');
            }
        }
    }
    cout << s << nl;
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