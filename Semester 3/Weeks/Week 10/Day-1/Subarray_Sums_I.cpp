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
    int n, x;
    cin >> n >> x;
    vector<ll> v, preSum;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            preSum.push_back(x);
        }
        else
        {
            preSum.push_back(preSum[i - 1] + x);
        }
        v.push_back(x);
    }


    int l = 0, r = 0, count = 0;

    while (r < n)
    {

        while (preSum[r] - preSum[l] == x && l <= r && r < n)
        {
            count++;
            r++;
            l++;
        }
        while (preSum[r] < x && r < n)
        {
            r++;
        }

        if (preSum[r] == x)
        {
            count++;
            r++;
        }

        while (preSum[r] - preSum[l] > x && l <= r)
        {
            l++;
        }
        while (preSum[r] - preSum[l] < x && r < n)
        {
            r++;
        }
        }

    cout << count << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}