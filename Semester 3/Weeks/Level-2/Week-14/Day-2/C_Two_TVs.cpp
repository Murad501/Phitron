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
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        mp[l]++;
        mp[r + 1]--;
    }

    int sum = 0, ans = 0;
    for (auto [key, value] : mp)
    {
        sum += value;
        ans = max(sum, ans);
    }
    if (ans > 2)
    {
        no;
    }
    else
    {
        yes;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}