// 23/06/2025 20:44
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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool ok = false;
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int mn = INT_MAX, mx = INT_MIN;
        for (int j = i + 1; j < n; j++)
        {
            if (j - i == 1)
            {
                if (abs(v[j] - v[i]) <= 1)
                {
                    ok = true;
                    ans = 0;
                    break;
                }
                else
                {
                    mn = min(mn, v[j]);
                    mx = max(mx, v[j]);
                }
            }
            else
            {
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);

                if (mx <= v[i])
                {
                    int diff = abs(mx - v[i]);
                    if (diff <= 1)
                    {
                        if (!ok)
                        {
                            ok = true;
                            ans = (j - i - 1);
                        }
                        else
                        {
                            ans = min(ans, (j - i - 1));
                        }
                        break;
                    }
                }
                else if (mn >= v[i])
                {
                    int diff = abs(mn - v[i]);
                    if (diff <= 1)
                    {
                        if (!ok)
                        {
                            ok = true;
                            ans = (j - i - 1);
                        }
                        else
                        {
                            ans = min(ans, (j - i - 1));
                        }
                        break;
                    }
                }
                else
                {
                    if (!ok)
                    {
                        ok = true;
                        ans = (j - i - 1);
                    }
                    else
                    {
                        ans = min(ans, (j - i - 1));
                    }
                    break;
                }
            }
        }

        if (ans == 0)
        {
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        int mn = INT_MAX, mx = INT_MIN;
        for (int j = i - 1; j >= 0; j--)
        {
            if (i - j == 1)
            {
                if (abs(v[j] - v[i]) <= 1)
                {
                    ok = true;
                    ans = 0;
                    break;
                }
                else
                {
                    mn = min(mn, v[j]);
                    mx = max(mx, v[j]);
                }
            }
            else
            {
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);

                if (mx <= v[i])
                {
                    int diff = abs(mx - v[i]);
                    if (diff <= 1)
                    {
                        if (!ok)
                        {
                            ok = true;
                            ans = (i - j - 1);
                        }
                        else
                        {
                            ans = min(ans, (i - j - 1));
                        }
                        break;
                    }
                }
                else if (mn >= v[i])
                {
                    int diff = abs(mn - v[i]);
                    if (diff <= 1)
                    {
                        if (!ok)
                        {
                            ok = true;
                            ans = (i - j - 1);
                        }
                        else
                        {
                            ans = min(ans, (i - j - 1));
                        }
                        break;
                    }
                }
                else
                {
                    if (!ok)
                    {
                        ok = true;
                        ans = (i - j - 1);
                    }
                    else
                    {
                        ans = min(ans, (i - j - 1));
                    }
                    break;
                }
            }
        }

        if (ans == 0)
        {
            break;
        }
    }

    if (ok)
    {
        cout << ans << nl;
    }
    else
    {
        minus;
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