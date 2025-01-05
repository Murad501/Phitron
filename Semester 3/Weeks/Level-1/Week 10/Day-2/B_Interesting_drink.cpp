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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m, l = 0, r = n - 1, mid;
        cin >> m;
        int ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= m)
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}