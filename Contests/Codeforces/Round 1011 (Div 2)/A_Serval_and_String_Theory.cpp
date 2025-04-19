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
    bool ok = false;
    if (mp.size() > 1)
    {

        if (k > 0)
        {
            ok = true;
        }
        else
        {
            bool universal = true;
            string t = s;
            reverse(t.begin(), t.end());
            int v = n / 2;
            if (n % 2 == 0)
            {
                n--;
            }
            // cout << s << " " << t << nl;
            for (int i = 0; i <= v; i++)
            {
                if (s[i] < t[i])
                {
                    break;
                }
                if (s[i] > t[i])
                {
                    universal = false;
                    break;
                }
                else if (i == v)
                {
                    if (s[i] == t[i])
                    {
                        universal = false;
                        break;
                    }
                }
                // cout<<i<<" "<<v<<nl;
            }

            if (universal)
            {
                ok = true;
            }
            else
            {

                ok = false;
            }
        }
    }

    if (ok)
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
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}