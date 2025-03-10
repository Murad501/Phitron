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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> idxs;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && a[i - 1] > a[i])
        {
            idxs.push_back(i);
        }
    }

    int ans = 0;
    if (idxs.size() > 0)
    {
        for (int i = 0; i < idxs.size(); i++)
        {
            int idx = idxs[i];
            int prev;
            if (i == 0)
            {
                prev = 0;
            }
            else
            {

                int prev = idxs[i - 1];
                cout << prev << "-";
            }
            cout << idx << " " << prev << nl;
            if (a[idx - 1] <= a[idx] * x)
            {
                if (idx != idxs.size() - 1)
                {
                    idx = idxs[idx + 1] - 1;
                }
                else
                {
                    idx = n - 1;
                }
            }
            else
            {
                idx--;
            }
            int ans = max(ans, idx - prev);
        }
    }
    else
    {
        ans = n - 1;
    }
    cout << ans + 1 << nl;
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