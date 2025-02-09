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
    int n, x;
    cin >> n >> x;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {

            ans = max(ans, max(v[i] - v[i - 1], (x - v[i]) * 2));
        }
        else
        {
            ans = max(ans, max(v[i] - v[i - 1], v[i + 1] - v[i]));
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