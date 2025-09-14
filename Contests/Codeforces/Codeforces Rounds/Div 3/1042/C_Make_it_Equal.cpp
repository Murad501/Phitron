// 10/08/2025 20:57
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
    map<int, int> mpA, mpB;
    multiset<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x % k);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int val = x % k;
        auto it = a.find(val);
        if (it != a.end())
        {
            a.erase(it);
        }
        else
        {

            b.insert(val);
        }
    }

    bool ok = true;
    for (auto key : a)
    {
        int val = abs(key - k);
        auto it = b.find(val);
        if (it != b.end())
        {
            b.erase(it);
        }
        else
        {
            break;
        }
    }
    if(!b.empty()){
        no;
    }else{
        yes;
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