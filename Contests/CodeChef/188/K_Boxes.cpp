// 28/05/2025 21:03
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
    map<int, int> mp;
    vector<int> a, v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[a[i]] = x;
    }
    for (auto [key, value] : mp)
    {
        v.push_back(value);
    }
    vector<int> ans;
    ans.push_back(0);
    multiset<int> s;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {

        int sz = s.size();
        int val = v[i];
     
        if (sz < k)
        {
            sum += val;
            s.insert(val);
            ans.push_back(sum);
        }
        else
        {
            sum += val;
            s.insert(val);
            auto vl = s.begin();
            sum -= *vl;
            s.erase(vl);
            ans.push_back(sum);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[a[i] - 1] << " ";
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