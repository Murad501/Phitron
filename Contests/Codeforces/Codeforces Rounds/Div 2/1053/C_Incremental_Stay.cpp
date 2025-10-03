// 24/09/2025 18:29
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
    int m;
    cin >> m;
    vector<int> v;
    int n = m + m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int l = 0, r = n - 1;
    vector<int> temp, tempPrefix;
    temp.push_back(0);
    while (l < r)
    {

        temp.push_back(v[r] - v[l]);
        r--, l++;
    }

    int sz = temp.size();
    tempPrefix.push_back(0);
    for (int i = 1; i < sz; i++)
    {
        // cout << temp[i] << " ";
        tempPrefix.push_back(tempPrefix[i - 1] + temp[i]);
    }

    vector<int> sumO, prefixOdd, prefixOddR;
    prefixOdd.push_back(0);
    int sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        sumO.push_back(v[i] - v[i - 1]);
    }
    vector<int> sumE, prefixEven, prefixEvenR;
    for (int i = 2; i < n; i += 2)
    {
        sumE.push_back(v[i] - v[i - 1]);
    }

   sz = sumO.size();
    for (int i = 0; i < sz; i++)
    {
        if (i == 0)
        {
            prefixOdd.push_back(sumO[0]);
        }
        else
        {
            prefixOdd.push_back(sumO[i] + prefixOdd[i - 1]);
        }
    }
    reverse(all(sumO));

    for (int i = 0; i < sz; i++)
    {
        if (i == 0)
        {
            prefixOddR.push_back(sumO[0]);
        }
        else
        {
            prefixOddR.push_back(sumO[i] + prefixOddR[i - 1]);
        }
    }
    sz = sumE.size();
    for (int i = 0; i < sz; i++)
    {
        if (i == 0)
        {
            prefixEven.push_back(sumE[0]);
        }
        else
        {
            prefixEven.push_back(sumE[i] + prefixEven[i - 1]);
        }
    }
    reverse(all(sumE));

    for (int i = 0; i < sz; i++)
    {
        if (i == 0)
        {
            prefixEvenR.push_back(sumE[0]);
        }
        else
        {
            prefixEvenR.push_back(sumE[i] + prefixEvenR[i - 1]);
        }
    }

    cout<<prefixOdd[0]<<nl;

    // for (int i = 0; i < m; i++)
    // {
    //     int sm = tempPrefix[i];
    //     if (i & 1)
    //     {

    //     }
    //     else
    //     {
    //     }
    //     cout << tempPrefix[i] << " ";
    //     int sm = tempPrefix[i];
    // }

    // cout << sum << nl;
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