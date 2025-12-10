// 04/11/2025 19:51
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
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));

    int a = (v[0] + v[1]) - v[3];
    int b = (v[0] + v[2]) - v[3];
    int c = v[3] - (a + b);
    cout << a << " " << b << " " << c << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}