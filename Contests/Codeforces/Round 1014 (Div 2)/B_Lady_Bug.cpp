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
    int even = 0, odd = 0, b_even = 0, b_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            if (i % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '0')
        {
            if (i % 2 == 1)
            {
                b_even++;
            }
            else
            {
                b_odd++;
            }
        }
    }
    // cout<<b_even<<b_odd<<endl;

    if (b_even >= even && b_odd >= odd)
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