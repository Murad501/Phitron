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

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (a[i] % allPrimes[j] == 0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }

    vector<int> ans(n);
    int color = 1;
    for (auto [key, value] : mp)
    {

        for (auto val : value)
        {
            ans[val] = color;
        }
        color++;
    }
    cout << mp.size() << nl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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