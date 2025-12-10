// 08/11/2025 19:32
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
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    int ans = 1;
    for (int i = 0; i <= n; i++)
    {
        int used = i * v[0];
        if (used > n)
        {
            break;
        }
        for (int j = 0; j <= n; j++)
        {
            int rem = n - used;
            int used2 = j * v[1];
            if (used2 > rem)
            {
                break;
            }

            int last = rem - used2;
            if (last % v[2] == 0)
            {
                int k = (last / v[2]);
                // cout<<i * v[0]<<" "<<n<<nl;
                ans = max(ans, (i + j + k));
            }
        }
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}