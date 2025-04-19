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
    int chef;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            chef = x;
        }
        v.push_back(x);
    }

    sort(all(v));

    int l = 0, r = n - 1, mid, idx;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] == chef)
        {

            idx = mid;
            break;
        }
        else if (v[mid] < chef)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    int ans = 0;
    if (idx == n - 1 || idx == 0)
    {

        if (idx == n - 1)
        {
            int prev = v[idx - 1];
            ans += 1000000 - chef;
            ans += (chef - prev) / 2;
        }
        else
        {
            int next = v[idx + 1];
            ans += chef - 1;
            ans += (next - chef) / 2;
        }
        ans++;
    }
    else
    {
        int prev = v[idx - 1];
        int next = v[idx + 1];
        ans += (chef - prev) / 2;
        ans += (next - chef) / 2;
        ans++;
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