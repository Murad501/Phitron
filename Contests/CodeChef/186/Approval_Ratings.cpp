// 14/05/2025 20:33
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

    vector<int> v;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    int ans = 0;

    if ((sum / 5) < 7)
    {
        sort(all(v));
        for (int i = 0; i < 5; i++)
        {
            sum -= v[i];
            sum += 10;
            ans += 100;
            if (sum / 5 >= 7)
            {
                break;
            }
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