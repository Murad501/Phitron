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
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(all(b));

    bool ok = true;
    for (int i = n - 2; i >= 0; i--)
    {

        if (a[i] > a[i + 1])
        {
            ll need = a[i] + a[i + 1];
            int l = 0, r = m - 1, mid;

            int val;
            bool found = false;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (b[mid] == need)
                {
                    found = true;
                    val = b[mid];
                    break;
                }
                else if (b[mid] > need)
                {

                    r = mid - 1;
                }
                else
                {
                    found = true;
                    val = b[mid];
                    l = mid + 1;
                }
            }

            if (!found)
            {

                ok = false;
                break;
            }
            else
            {

                a[i] = val - a[i];
            }
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
    }
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