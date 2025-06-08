// 24/04/2025 20:44
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
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int sum = -1, minusCnt = 0;
    ;
    bool flag = true;
    int minA = INT_MAX, maxA = INT_MIN, minB = INT_MAX, maxB = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxA = max(maxA, a[i]);
        minA = min(minA, a[i]);
        if (b[i] != -1)
        {

            if (sum == -1)
            {
                sum = a[i] + b[i];
            }
            else
            {
                if (sum != (a[i] + b[i]))
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            minusCnt++;
            minB = min(minB, a[i]);
            maxB = max(maxB, a[i]);
        }
    }

    if (!flag)
    {
        zero;
    }
    else
    {

        if (minusCnt == n)
        {
            int first = maxA - minA;
            cout << k - first + 1 << nl;
            return;
        }

        if (sum < maxA)
        {
            zero;
            return;
        }
        int need = sum - minA;
        if (need > k)
        {
            zero;
            return;
        }

        cout << 1 << nl;
    }
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