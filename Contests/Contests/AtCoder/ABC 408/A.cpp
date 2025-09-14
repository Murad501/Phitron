// 31/05/2025 18:01
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
    int n, s;
    cin >> n >> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {

        int next = (v[i] + s);

        if (v[i + 1] > next)
        {
            ok = false;
        }
    }
    if (v[0] > s)
    {
        ok = false;
    }
    if (ok)
    {
        cyes;
    }
    else
    {
        cno;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}