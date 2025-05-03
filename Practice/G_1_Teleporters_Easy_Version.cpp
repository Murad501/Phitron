#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n + 1);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = x + i;
  
    }
    sort(v.begin(), v.end());

    for (int i = 1; i <= n; i++)
    {
        if (c > v[i])
        {
            c -= (v[i]);
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}