// 24/05/2025 20:35
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
    sort(all(v));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = v[i] + v[n - 1];
        if (sum % 2 != 1)
        {

            break;
        }
        else
        {
            cnt++;
        }
    }
    int cnt2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = v[i] + v[0];
        if (sum % 2 != 1)
        {

            break;
        }
        else
        {
            cnt2++;
        }
    }
    cout << min(cnt, cnt2) << nl;
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