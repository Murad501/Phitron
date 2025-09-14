// 10/09/2025 20:32
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

    int ans = 0;

    vector<int> bits(32);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    vector<bitset<32>> temp;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        bitset<32> tmp(x);
        temp.push_back(tmp);
        cout << tmp << nl;
        for (int j = 0; j < 32; j++)
        {
            if (tmp[j])
            {
                bits[j]++;
            }
        }
    }

    for (int i = 31; i >= 0; i--)
    {
        int cnt = bits[i];
        bool zro = true;
        vector<bitset<32>> filter;
        if (cnt < (n - cnt) || cnt == n)
        {
            zro = false;
        }
        int m = temp.size();
        for (int j = 0; j < m; j++)
        {
            if(zro){
                if(!temp[j][i]){
                    filter.push_back()
                }
            }
        }
    }
    cout << nl;

    cout << ans << nl;
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