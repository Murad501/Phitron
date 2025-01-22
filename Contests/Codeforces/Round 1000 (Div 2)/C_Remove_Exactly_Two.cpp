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
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
    }

    vector<int> v;
    for (auto [key, value] : mp)
    {

        v.push_back(value);
    }

    sort(v.begin(), v.end(), greater<int>());
    int sz = v.size();
    int ans = 1;
    if (sz > 1)
    {
        if (sz == 2)
        {
            ans += v[0] - 1;
            ans += v[1] - 1;
        }
        else
        {
            ans += v[0] - 1;
            ans += v[1];
        }
    }
    else
    {
        if (v[0] == 1)
        {
            ans = 0;
        }
        else
        {
            ans = 1;
        }
    }

    cout << ans << nl;
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