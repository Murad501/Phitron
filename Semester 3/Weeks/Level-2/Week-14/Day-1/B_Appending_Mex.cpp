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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = -1;

    int mex = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mex)
        {
            ans = i + 1;
            break;
        }
        if (v[i] == mex)
        {
            mex++;
        }
    }

    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}