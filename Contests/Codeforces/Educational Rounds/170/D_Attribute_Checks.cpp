// 24/07/2025 08:27
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
    int n, p;
    cin >> n >> p;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int I = 0, S = 0, cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            cnt++;
        }
        else if (v[i] > 0)
        {
            if (abs(v[i]) > I)
            {
                int need = abs(v[i] - I);
                if (cnt < need)
                {
                    break;
                }
                else
                {
                    cnt -= need;
                    I = abs(v[i]);
                    ans++;
                }
            }
            else
            {
                ans++;
            }
        }
        else
        {
            if (abs(v[i]) > S)
            {
                int need = abs(v[i] - S);
                if (cnt < need)
                {
                    break;
                }
                else
                {
                    cnt -= need;
                    S = abs(v[i]);
                    ans++;
                }
            }
            else
            {
                ans++;
            }
        }
    }
    cout<<ans<<nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}