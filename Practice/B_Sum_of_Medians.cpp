// 13/08/2025 09:02
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n * k; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(all(v));

    int mid = n / 2;
    int cnt = 0;
    int sum = 0;
    int i = 0;
    while (cnt < k)
    {
        if ((i + 1) % (mid + 1) == 0)
        {

            sum += v[i];
            cnt++;
        }
        i++;
    }

    cout << sum << nl;
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