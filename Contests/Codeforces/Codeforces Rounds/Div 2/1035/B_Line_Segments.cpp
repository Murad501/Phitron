// 11/07/2025 21:59
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
    double px, py, qx, qy;
    cin >> px >> py >> qx >> qy;

    double dis = sqrtl((px - qx) * (px - qx) + (py - qy) * (py - qy));

    double mx = dis, sum = dis;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    sum -= mx;
    if (sum >= mx)
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
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}