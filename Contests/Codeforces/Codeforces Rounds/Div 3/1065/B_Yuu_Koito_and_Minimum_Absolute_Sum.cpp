// 20/11/2025 20:44
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
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            v.push_back(-1);
            cnt++;
        }
        else
        {

            v.push_back(x);
        }
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a = v[i], b = v[i + 1];
        a = max(a, 0LL), b = max(b, 0LL);
        sum += (b - a);
    }
    if (sum <= 0 && v[n - 1] == -1)
    {
        v[n - 1] = abs(sum);
        sum = 0;
    }

    if (sum >= 0 && v[0] == -1)
    {
        v[0] = sum;
        sum = 0;
    }
    cout << abs(sum) << nl;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            cout << 0 << " ";
        }
        else
        {

            cout << v[i] << " ";
        }
    }
    cout << nl;
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