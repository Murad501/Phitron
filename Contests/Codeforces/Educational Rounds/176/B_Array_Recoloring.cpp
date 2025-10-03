// 06/04/2025 18:50
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> temp = v;
    sort(temp.rbegin(), temp.rend());

    ll sum = 0;
    if (k > 1)
    {
        for (int i = 0; i <= k; i++)
        {
            sum += temp[i];
        }
    }
    else
    {
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = v[i];
            if (i == 0)
            {
                mx += v[n - 1];
            }
            else if (i == n - 1)
            {
                mx += v[0];
            }
            else
            {
                mx += max(v[n - 1], v[0]);
            }
            m = max(m, mx);
        }
        sum+=m;
    }
    cout << sum << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}