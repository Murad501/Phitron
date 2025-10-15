// 03/10/2025 22:10
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
    int n, q;
    cin >> n >> q;
    vector<int> v, cnts, odds;
    int od = 0, ev = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        bool isOdd = false;
        if (x & 1)
        {
            isOdd = true;
        }

        int cnt = 0, cnt2 = 0;
        int temp = x;
        while (x > 1)
        {
            cnt++;
            x /= 2;
            if (x & 1 && x > 1)
            {
                x++;
            }
        }
        if (isOdd)
        {
            int pos = pow(2, cnt);
            if (pos < temp + 1)
            {
                od++;
            }
        }

        odds.push_back(od);
        // evens.push_back(ev);

        if (i == 0)
        {

            cnts.push_back(cnt);
        }
        else
        {
            cnts.push_back(cnt + cnts[i - 1]);
        }
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int ans = cnts[r - 1];
        int odd = odds[r - 1];
        if (l > 1)
        {
            ans -= cnts[l - 2];
            odd -= odds[l - 2];
        }
        ans += (odd / 2);

        cout << ans << nl;
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