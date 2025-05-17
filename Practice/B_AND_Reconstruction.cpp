// 12/05/2025 20:51
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
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    deque<int> dq;
    for (int i = 1; i < n - 1; i++)
    {
        int val = (v[i] | v[i - 1]);
        dq.push_back(val);
    }
    dq.push_front(v[0]);
    dq.push_back(v[n - 2]);
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        int val = dq[i] & dq[i - 1];
        if (val != v[i - 1])
        {
            ok = false;
            break;
        }
    }
    if (!ok)
    {
        minus;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << dq[i] << " ";
        }
        cout << nl;
    }
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