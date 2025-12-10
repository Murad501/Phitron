// 03/11/2025 21:13
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> cnts;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            cnt++;
        }
        // cout << cnt << " ";
        cnts.push_back(cnt);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int total = cnts[r - 1];
        if (l > 1)
        {
            total -= (cnts[l - 2]);
        }
        if (total > 0)
        {
            zero;
        }
        else
        {
            cout << 1 << nl;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}