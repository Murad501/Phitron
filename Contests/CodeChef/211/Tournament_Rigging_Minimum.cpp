// 05/11/2025 21:58
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, w;
    cin >> n >> w;
    int sz = 1;
    vector<int> v;

    v.push_back(w);
    if (w == 1)
    {

        for (int i = 1; i < n; i++)
        {
            int curr = 2;
            for (int j = 1; j <= pow(2, i) - 1; j++)
            {
                v.push_back(curr);
                curr++;
            }
            v.push_back(1);
            curr = 2;
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        int mx = pow(2, n);
        int curr = 2;
        for (int i = 0; i < pow(2, n - 1) - 1; i++)
        {
            cout << curr << " " << mx << " ";
            curr++;
            mx--;
        }
        cout << 1 << " " << mx;
        cout << nl;
        return;
    }
    int curr = 2;
    int val1 = 1, val2 = 1;

    bool isReverse = false;
    while (sz != pow(2, n) - 1)
    {
        if (sz == pow(2, curr) - 2)
        {
            v.push_back(w);
            curr++;
            val1 = 1;
            val2 = pow(2, curr - 1) - 1;
            isReverse = true;
        }
        else
        {
            if (isReverse)
            {
                v.push_back(val1);
                val1++;
            }
            else
            {
                v.push_back(val2);
                val2--;
            }
            isReverse = !isReverse;
        }
        sz++;
    }

    int j = pow(2, n - 1) - 1, mx = pow(2, n);
    int m = pow(2, n - 1);
    int rem = pow(2, n - 1);
    if (rem <= w)
    {
        rem = pow(2, n);
    }
    if (rem == w)
    {
        
        rem = pow(2, n - 1);
    }
    // cout << j << nl;
    for (int i = 0; i < sz; i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (mx == rem || mx == w)
        {
            mx--;
        }
        cout << v[j] << " " << mx << " ";
        mx--;
        j++;
    }
    cout << w << " " << rem;

    cout << nl;
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