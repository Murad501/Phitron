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
    ll l = 1, r = n, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        ll remaining = n - mid;
        ll possible_candies = (1LL * (mid * (mid + 1))) / 2;
        if (possible_candies - remaining == k)
        {
            ans = remaining;
            break;
        }
        else if (possible_candies - remaining > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}