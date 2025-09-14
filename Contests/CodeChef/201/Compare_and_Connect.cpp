// 27/08/2025 21:27
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
    int n, m;
    cin >> n >> m;
    string ans;
    string a = "<<";
    int curr = 1;
    map<int, string> mpL;
    mpL[1] = a;
    while (curr <= 1e9)
    {
        a += a;
        curr *= 2;
        mpL[curr] = a;
    }
    a = ">>";
    curr = 1;
    map<int, string> mpG;
    mpG[1] = a;
    while (curr <= 1e9)
    {
        a += a;
        curr *= 2;
        mpG[curr] = a;
    }
    a = "<>";
    curr = 1;
    map<int, string> mpLG;
    mpLG[1] = a;
    while (curr <= 1e9)
    {
        a += a;
        curr *= 2;
        mpLG[curr] = a;
    }
    a = "><";
    curr = 1;
    map<int, string> mpGL;
    mpGL[1] = a;
    while (curr <= 1e9)
    {
        a += a;
        curr *= 2;
        mpGL[curr] = a;
    }

    if (n)
    {
        if (m)
        {
            ans = "<<>";
            m--;
            n--;

            string temp;

            int prev;
            int curr = 0;
            while (n)
            {

                
            }
            while (m)
            {

                ans += "<>";
                m--;
            }
        }
        else
        {
            ans = "<=<";
            n -= 2;
            while (n)
            {

                ans = "<<" + ans;
                n--;
            }
        }
    }
    else
    {
        ans = ">=>";
        m -= 2;
        string temp(m, '><');
        ans = temp + ans;
    }
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