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
    int n, d;
    cin >> n >> d;
    set<int> ans;
    ans.insert(1);
    if (d % 2 == 1)
    {
        ans.insert(d);
    }

    if (n > 2)
    {
        ans.insert(3);
        ans.insert(7);
    }
    else
    {
        if (d == 6 || d == 9)
        {
            ans.insert(3);
        }
    }
    if (n > 5 || (n > 2 && (d == 3 || d == 6)))
    {
        ans.insert(9);
    }
    for (auto it : ans)
    {
        cout << it << " ";
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