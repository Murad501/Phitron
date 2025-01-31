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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int odd_cnt = 0;
    for (auto [key, value] : mp)
    {
        if (value % 2 != 0)
        {
            odd_cnt++;
        }
    }

    if (odd_cnt <= k + 1)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}