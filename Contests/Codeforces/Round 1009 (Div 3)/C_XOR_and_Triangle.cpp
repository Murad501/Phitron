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
    int x;
    cin >> x;
    int bit = __lg(x);

    if (x == (1 << bit) || x < 5)
    {
        minus;
    }
    else
    {
        string s;
        int cnt = 0;
        for (int i = 0; i <= bit; i++)
        {
            if (x & (1 << i))
            {
                s += '1';
                cnt++;
            }
            else
            {
                s += '0';
            }
        }
        // cout<<s<<nl;

        if (cnt == (bit + 1))
        {
            minus;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < s.size(); i++)
            {
                 if(s[i+1] != s[i] ){
                    ans+=(1<<i);
                    ans+=(1<<i+1);
                    break;
                 }
            }
            cout<<ans<<nl;
        }
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