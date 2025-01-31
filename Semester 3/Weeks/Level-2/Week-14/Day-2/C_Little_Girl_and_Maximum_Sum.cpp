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
    int n, q;
    cin >> n >> q;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int arr[n + 1] = {0}, preSum[n + 1] = {0};
    vector<int> cnt;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        arr[l]++;
        arr[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        preSum[i] = arr[i] + preSum[i - 1];
        cnt.push_back(preSum[i]);
    }

    sort(cnt.rbegin(), cnt.rend());
    sort(v.rbegin(), v.rend());
    ll ans = 0;

    for (int i = 0; i < cnt.size(); i++)
    {
        if (cnt[i] == 0)
        {
            break;
        }
        ans += 1LL * cnt[i] * v[i];
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}