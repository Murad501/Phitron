// 03/05/2025 18:00
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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(26);
    for (int i = 0; i < 26; i++)
    {
        v[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int val = s[i] - 'a';
        v[val] = 1;
    }
    for (int i = 0; i < 26; i++)
    {

        if (v[i] == 0)
        {
            char c = 'a' + i;
            cout << c << nl;
            return;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}