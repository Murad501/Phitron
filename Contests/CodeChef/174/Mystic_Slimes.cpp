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
        v.push_back(x);
    }

    int ans = INT_MIN;
    if (n == 2)
    {
        ans = abs(v[0] - v[1]);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans = max(ans, v[0]);
            }
            else if (i == n - 1)
            {
                ans = max(ans, v[n - 1]);
            }
            else
            {
                if (n == 3)
                {
                    int val = v[i] - (v[0] + v[n - 1]);
                    ans = max(ans, val);
                }
                else
                {
                    if (i == 1)
                    {
                        ans = max(ans, (v[i] - v[0]));
                    }
                    else if (i == n - 2)
                    {
                        ans = max(ans, (v[n - 2] - v[n - 1]));
                    }
                    else
                    {
                        ans = max(ans, v[i]);
                    }
                }
            }
        }
    }

    cout<<ans<<nl;
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