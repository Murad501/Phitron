// 24/05/2025 18:48
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
    int ans = 0;
    char currDif = '0';
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        char c = s[i];
        cout<<c<<nl;
        int available = c - '0';
        if (available >= currDif)
        {
            c -= currDif;
            s[i] = c;
        }
        else
        {
            currDif -= available;
            if (currDif > '0')
            {
                currDif--;
                c = '9';
                if (currDif > '0')
                {
                    c -= currDif;
                }
            }
            s[i] = c;
        }
    }

    cout << s << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}