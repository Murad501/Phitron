// 24/04/2025 19:40
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    n = unique(v.begin(), v.end()) - v.begin();
    cout << "n" << n << nl;
    int ans = n;
    for (int i = 0; i + 2 < n; ++i)
    {
        int x = (v[i] < v[i + 1] && v[i + 1] < v[i + 2]);
        int y = (v[i] > v[i + 1] && v[i + 1] > v[i + 2]);
        cout<<x<<" "<<y<<nl;
        ans -= x;
        ans -= y;
    }
    cout << ans << '\n';
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