// 23/06/2025 21:33
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
    map<int, int> mp;
    map<int, int> idxs;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[v[i]] = i;
    }
    for (int i = 0; i < n - 2; i++)
    {
        while (v[i] == v[i + 1])
        {
            i++;
        }

        int first = v[i];
        int second = v[i+1];
        int l = i + 1, r = n - 1, third = -1;
        bool ok = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] + second > first)
            {
                ok = true;
                third = mid;
                l = mid + 1;
            }

            else
            {
                r = mid - 1;
            }
        }

        if (ok)
        {
            int fst = idxs[v[first]];
            // cout<<fst<<" "<<fst+1<<" "<<third<<" "<<i<<nl;
            // cout<<v[i]<<" "<<v[i+1]<<" "<<v[third]<<nl;
            int len = third - fst;
            len -= 2;
            int sum = mp[v[i]] * len;
            ans += sum;
        }
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