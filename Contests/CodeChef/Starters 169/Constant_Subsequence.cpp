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
    vector<int> v, pos;
    ll pos_sum = 0;
    int pos_cnt = 0, neg_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x >= 0)
        {
            pos_sum += x;
            pos.push_back(x);
            pos_cnt++;
        }
        else if (x < 0)
        {
            neg_cnt++;
        }
    }
    if (pos_sum > 0)
    {
        ll ans = INT_MIN;

        int maxPair = pos_cnt / (neg_cnt + 1);

        if (pos_cnt % (neg_cnt + 1))
        {
            maxPair++;
        }

        ll l = 0, r = 0, current_sum = 0;
        while (r < pos.size())
        {
            current_sum += pos[r];
            if (r - l + 1 == maxPair)
            {
                ans = max(ans, current_sum);
                current_sum -= pos[l];
                r++;
                l++;
            }
            else
            {

                r++;
            }
        }
        cout << ans << nl;
    }
    else
    {

        cout << 0 << nl;
    }
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