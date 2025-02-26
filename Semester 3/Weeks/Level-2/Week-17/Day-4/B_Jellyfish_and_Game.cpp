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
    multiset<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }

    for (int i = 1; i <= min(k, 10); i++)
    {
        if (i % 2 == 1)
        {
            int minVal = *a.begin();
            int maxVal = *b.rbegin();
            if (minVal < maxVal)
            {
                auto minIt = a.find(minVal);
                auto maxIt = b.find(maxVal);
                a.erase(minIt);
                b.erase(maxIt);
                a.insert(maxVal);
                b.insert(minVal);
            }
        }
        else
        {
            int maxVal = *a.rbegin();
            int minVal = *b.begin();
            if (maxVal > minVal)
            {
                auto maxIt = a.find(maxVal);
                auto minIt = b.find(minVal);
                a.erase(maxIt);
                b.erase(minIt);
                a.insert(minVal);
                b.insert(maxVal);
            }
        }
    }

    if (k > 10 && k % 2 == 1)
    {
        int minVal = *a.begin();
        int maxVal = *b.rbegin();
        if (minVal < maxVal)
        {
            auto minIt = a.find(minVal);
            auto maxIt = b.find(maxVal);
            a.erase(minIt);
            b.erase(maxIt);
            a.insert(maxVal);
            b.insert(minVal);
        }
    }

    ll sum = 0;
    for (auto val : a)
    {
        sum += val;
    }
    cout << sum << nl;
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