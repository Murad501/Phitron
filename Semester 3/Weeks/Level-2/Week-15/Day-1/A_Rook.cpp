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
    string s;
    cin >> s;
    char c = s[0];
    char val = s[1];

    char currC = 'a';
    for (int i = 1; i <= 8; i++)
    {
        char curr = i + '0';
        if (val != curr)
        {
            cout << c << curr << nl;
        }
        if (currC != c)
        {
            cout << currC << val << nl;
        }
        currC++;
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