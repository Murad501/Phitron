// 23/07/2025 09:01
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    sort(v.rbegin(), v.rend());

    while (v[0] > 0)
    {
        int x = v[0];
        v[0] = 0;
        ans += x;

        priority_queue<int> pq, pq2;
        for (int i = 1; i < min(k, n); i++)
        {
            if (v[i] == 0)
            {
                break;
            }
            else
            {
                int diff = x - v[i];
                if (diff > 0)
                {
                    pq.push(diff);
                    pq2.push(diff);
                }
                v[i] = 0;
            }
        }
        sort(v.rbegin(), v.rend());

        while (!pq.empty())
        {
            int tp = pq.top();
            pq.pop();
            for (int i = 0; i < min(k, n); i++)
            {
                if (v[i] == 0)
                {
                    break;
                }
                else
                {
                    if (tp <= v[i])
                    {
                        v[i] -= tp;
                        break;
                    }
                    else
                    {
                        tp -= v[i];
                        v[i] = 0;
                        pq.push(tp);
                    }
                }
            }
            sort(v.rbegin(), v.rend());
        }

        sort(v.rbegin(), v.rend());
    }
    cout << ans << nl;
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