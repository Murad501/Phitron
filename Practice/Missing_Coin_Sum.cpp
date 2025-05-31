// 19/05/2025 00:04
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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    int curr = 1;
    if (v[0] > 1)
    {
        cout << curr << nl;
        return;
    }
    curr = 2;

    for (int i = 1; i < n; i++)
    {
        if (v[i] > curr)
        {
            break;
        }
        else
        {
            curr += v[i];
        }
    }
    cout << curr << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}