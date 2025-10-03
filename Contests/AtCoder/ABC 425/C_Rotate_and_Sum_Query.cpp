// 27/09/2025 18:31
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
    int n, q;
    cin >> n >> q;
    vector<int> v, prefixSum;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (i == 0)
        {
            prefixSum.push_back(x);
        }
        else
        {
            prefixSum.push_back(x + prefixSum[i - 1]);
        }
    }

    pair<int, int> left, right;
    left = {1, n}, right = {0, 0};
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y;
            cin >> y;
            if ((y + left.first) - 1 >= n)
            {
                int rem = ((y + left.first) - n);
                left = {rem, n};
                if (rem == 1)
                {
                    right = {0, 0};
                }
                else
                {
                    right = {1, rem - 1};
                }
            }
            else
            {
                int val = left.first + y;
                left = {val, n};
                right = {1, val - 1};
            }

            // cout << left.first << " " << left.second << nl;
        }
        else
        {
            int l, r;
            cin >> l >> r;
            if ((left.second - left.first) + 1 == n)
            {
                int sum = prefixSum[r - 1];
                if (l > 1)
                {
                    sum -= prefixSum[l - 2];
                }
                cout << sum << nl;
            }
            else
            {
                if (r - l + 1 <= (left.second - left.first) + 1)
                {
                    // cout<<nl;
                    // cout<<left.first<<" "<<left.second<<nl;
                    int miss = left.first - 1;
                    int sum = prefixSum[(r + miss) - 1];
                    // cout<<miss<<" "<<nl;
                    if (l > miss)
                    {
                    }
                    sum -= prefixSum[miss + l - 2];
                    cout << sum << nl;
                }
                else
                {
                    // yes;
                    cout<<l<<" "<<r<<nl;
                    int extra = (r - l) - (left.second - left.first);
                    int sum = prefixSum[n - 1];
                    cout<<extra<<nl;
                    sum -= prefixSum[right.second - 1];
                    cout<<right.first<<" "<<right.second<<nl;
                    
                    if(extra >= 1){

                        sum += prefixSum[extra - 1];
                    }
                    cout << sum << nl;
                }
            }
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}