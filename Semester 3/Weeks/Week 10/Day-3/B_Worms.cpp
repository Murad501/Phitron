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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            v.push_back(x);
        }
        else
        {
            v.push_back(v[i - 1] + x);
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m, l = 0, r = n - 1, mid, ans;
        cin >> m;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] >= m)
            {
                r = mid - 1;
                ans = mid + 1;
            }
            else
            {
                l = mid + 1;
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