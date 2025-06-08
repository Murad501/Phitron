// 08/04/2025 21:39
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = 0;

    int sz = n / k;

    int l = 0, r = sz;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        int cnt = 0;
        unordered_set<int> s;
        for (int j = 0; j < n; j++)
        {
            if (v[j] < mid)
            {
                s.insert(v[j]);
            }

            if (s.size() == mid)
            {
                cnt++;
                s.clear();
            }
        }
        s.clear();

        if (cnt >= k)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << nl;
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