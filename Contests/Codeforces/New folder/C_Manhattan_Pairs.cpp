// 19/07/2025 22:06
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
    vector<pair<int, pair<int, int>>> pa, pb;
    vector<pair<int, int>> ans1, ans2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pa.push_back({x, {y, i}});
        pb.push_back({y, {x, i}});
    }

    sort(all(pa));
    sort(all(pb));
    int sum1 = 0, sum2 = 0;

    vector<int>checka(n, 0), checkb(n, 0);
    for (int i = 0; i < n / 2; i++)
    {
        int xx = abs(pa[i].first - pa[n - 1 - i].first);

        int yy = INT_MIN, idx;
        // int yy = abs(pa[i].second.first - pa[n - 1 - i].second.first);
        for (int j = n / 2; j < n; j++)
        {
            if(checka[j] == 1){
                continue;
            }
            int temp = abs(pa[i].second.first - pa[n - 1 - i].second.first);
            if(temp > yy){
                idx = j;

            }
        }
        checka[idx] = 1;
        ans1.push_back({i, idx});
        sum1 += (xx + yy);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int xx = abs(pb[i].first - pb[n - 1 - i].first);
         int yy = INT_MIN, idx;
        // int yy = abs(pa[i].second.first - pa[n - 1 - i].second.first);
        for (int j = n / 2; j < n; j++)
        {
            if(checkb[j] == 1){
                continue;
            }
            int temp = abs(pb[i].second.first - pb[n - 1 - i].second.first);
            if(temp > yy){
                idx = j;

            }
        }
        checkb[idx] = 1;
        ans2.push_back({i, idx});
        sum2 += (xx + yy);
    }

    // cout << sum1 << " " << sum2 << nl;

    if (sum1 > sum2)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << ans1[i].first << " " << ans1[i].second << nl;
        }
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << ans2[i].first << " " << ans2[i].second << nl;
        }
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