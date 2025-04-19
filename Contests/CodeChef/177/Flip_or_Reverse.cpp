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
    string a, b;
    cin >> a >> b;

    vector<pair<int, int>> pr;
    int l = 0;
    while (l < n)
    {
        if (a[l] != b[l])
        {
            int r = l;
            while (r < n && b[r] != a[r])
            {
                r++;
            }
            if (b[r] == a[r])
            {
                r--;
            }
            pr.push_back({l + 1, r + 1});
            l = r + 1;
        }
        else
        {
            l++;
        }
    }

    cout << pr.size() << nl;
    for (int i = 0; i < pr.size(); i++)
    {
        cout << 1 << " " << pr[i].first << " " << pr[i].second << nl;
    }
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