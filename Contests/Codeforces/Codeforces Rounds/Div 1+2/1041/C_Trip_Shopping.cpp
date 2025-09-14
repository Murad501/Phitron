// 07/08/2025 21:29
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

    int sum = 0;
    vector<pair<int, int>> prA, prB;
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i] - b[i]);
        prA.push_back({a[i], b[i]});
        prB.push_back({b[i], a[i]});
    }

    sort(all(prA));
    sort(all(prB));

    int dif = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        pair<int, int> tempA = prA[i];
        pair<int, int> tempB = prA[i + 1];

        int sm = abs(tempA.first - tempA.second);
        sm += abs(tempB.first - tempB.second);

        vector<int> v({tempA.first, tempA.second, tempB.first, tempB.second});
        sort(all(v));
        int sm2 = abs((v[0] + v[1]) - (v[2] + v[3]));
        dif = min(dif, abs(sm - sm2));
    }

    // int diff = INT_MAX;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int sm = abs(a[i] - b[i]);
    //         sm += abs(a[j] - b[j]);

    //         vector<int> v({a[i], b[i], a[j], b[j]});
    //         sort(all(v));
    //         int sm2 = abs((v[0] + v[1]) - (v[2] + v[3]));
    //         // cout<<sm<<" "<<sm2<<nl;

    //         diff = min(diff, abs(sm - sm2));
    //     }
    // }
    sum += dif;

    cout << sum << nl;
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