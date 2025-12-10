// 17/10/2025 21:00
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

    int ansL, ansR;
    int n;
    cin >> n;
    // cout << flush;
    int l = 1, r = n, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        cout << 1 << " " << l << " " << mid;
        cout << endl
             << flush;
        int x;
        cin >> x;
        cout << 2 << " " << l << " " << mid;
        cout << endl
             << flush;
        int y;
        cin >> y;

        if (x == y)
        {
            l = mid + 1;
        }
        else
        {
            ansL = mid;
            r = mid - 1;
        }
    }
    int sum = (n * (n + 1)) / 2;
    cout << 2 << " " << 1 << " " << n;
    cout << endl
         << flush;
    int total;
    cin>>total;
    int diff = total - sum;


    cout << "! " << ansL << " " << ansL+diff - 1;
    cout << endl
         << flush;
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