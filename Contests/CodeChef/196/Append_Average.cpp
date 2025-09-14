// 23/07/2025 21:02
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
    vector<int> v;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        ans += x;
    }

    sort(all(v));
    int mn = v[0];
    int mx = v[1];
    int sm = (mn + mx);
    if (sm & 1)
    {
        sm++;
    }
    sm /= 2;
    int sum = sm;
    mx = sm;
    int cnt = 1;
    while (abs(mn - mx) > 1 && cnt < k)
    {
        int sm = (mn + mx);
        if (sm & 1)
        {
            sm++;
        }
        sm /= 2;
        sum += sm;
        mx = sm;
        cnt++;
    }

    ans += sum;
    int available = (k - cnt);

    sm = (mx + mn);
    if (sm & 1)
    {
        sm++;
    }
    sm /= 2;
    ans += (available * sm);

    // cout << ans << nl;

    // int sum = v[0] + v[1];
    // if(sum &1){
    //     sum++;
    // }
    // sum/=2;
    // ans += (sum * k);
    // for (int i = 0; i < n; i++)
    // {
    //      cout<<v[i]<<" ";
    // }
    // cout<<nl;
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