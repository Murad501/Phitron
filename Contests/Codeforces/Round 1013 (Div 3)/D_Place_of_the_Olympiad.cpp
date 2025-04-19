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
    int n, m, k;
    cin >> n >> m >> k;
    int l = 1, r = m;
    int ans = m;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        ll available = m / (mid + 1);
        available *= mid;
        available += m % (mid + 1);
        ll total = n * available;
        // cout<<available<<" vilble "<<total<< " "<<mid<<nl;
        if (total >= k)
        {

            r = mid - 1;
            ans = mid;
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
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}