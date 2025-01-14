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
    ll sum = 0;
    int cnt_zero = 0, cnt_one = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
        if (x == 0)
        {
            cnt_zero++;
        }
        else if (x == 1)
        {
            cnt_one++;
        }
    }
    ll ans = 0;
    if (cnt_one && sum > 1)
    {
        ll val = 1LL * (1LL << cnt_zero);
        ans = val * cnt_one;
    }
    else if (sum == 1 && cnt_zero)
    {
        ll val = 1LL * (1LL << cnt_zero);
        ans = val;
    }else if(sum == 1 && !cnt_zero){
        ans = 1;
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