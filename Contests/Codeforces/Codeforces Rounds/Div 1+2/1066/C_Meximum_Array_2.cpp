// 23/11/2025 16:21
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, k, q;
    cin >> n >> k >> q;
    vector<pair<int, int>> pr;
    vector<bool> isMn(n + 1, false);
    for (int i = 0; i < q; i++)
    {
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 2)
        {
            pr.push_back({l - 1, r - 1});
        }
        else
        {
            for (int j = l - 1; j < r; j++)
            {
                isMn[j] = true;
            }
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(k);
    }

    for (auto [l, r] : pr)
    {
        int curr = 0;

        set<int> v;
        for (int i = l; i <= r; i++)
        {

            if (isMn[i])
            {
                ans[i] = k + 1;
            }
            else if (ans[i] < k)
            {
                if (v.count(ans[i]))
                {
                    for (auto key : v)
                    {
                        if (key == curr)
                        {
                            curr++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if (curr == k)
                    {
                        curr++;
                    }
                    ans[i] = curr;
                    curr++;
                }
                else
                {

                    v.insert(ans[i]);
                }
            }
            else
            {

                for (auto key : v)
                {
                    if (key == curr)
                    {
                        curr++;
                    }
                    else
                    {
                        break;
                    }
                }

                if (curr == k)
                {
                    curr++;
                }
                ans[i] = curr;
                curr++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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