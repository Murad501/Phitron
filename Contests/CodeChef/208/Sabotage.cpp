// 15/10/2025 20:33
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
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }

    sort(rall(v));
    int i = 0;
    for (int i = 0; i < k; i++)
    {
        x += 100;
        v[i] = 0;
    }
    sort(rall(v));
    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
        {
            curr++;
        }
        else
        {
            break;
        }
    }
    cout << curr << nl;
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