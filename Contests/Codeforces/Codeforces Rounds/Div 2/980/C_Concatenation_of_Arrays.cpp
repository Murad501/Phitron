// 22/07/2025 07:22
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

    map<int, vector<int>> mp;
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pr.push_back({a, b});
        // mp[a].push_back(b);
    }

    sort(pr.begin(), pr.end(), [&](pair<int, int> &A, pair<int, int> &B)
         {
        if(max(A.first, A.second) == max(B.first, B.second)) return min(A.first, A.second) < min(B.first, B.second);
        return max(A.first, A.second) < max(B.first, B.second); });

    for (int i = 0; i < n; i++)
    {
        cout << pr[i].first << " " << pr[i].second << " ";
    }
    cout << nl;

    // vector<int> ans;
    // auto it = mp.rbegin();
    // while (it != mp.rend())
    // {
    //     vector<int> values = it->second;
    //     int key = it->first;
    //     int sz = values.size();
    //     sort(values.rbegin(), values.rend());
    //     for (int i = 0; i < sz; i++)
    //     {
    //         ans.push_back(values[i]);
    //         ans.push_back(key);
    //     }
    //     it++;
    // }

    // reverse(all(ans));
    // for (int i = 0; i < n+n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << nl;
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