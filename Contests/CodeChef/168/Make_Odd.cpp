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
    int cnt_a = 0, cnt_b = 0;
    bool havePair = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            cnt_a++;
        }
        if (b[i] == '1')
        {
            cnt_b++;
        }

        if (a[i] != b[i])
        {
            havePair = true;
            break;
        }
    }

    if (havePair)
    {
        yes;
    }
    else
    {
        if (cnt_a % 2 == 1 || cnt_b % 2 == 1)
        {
            yes;
        }
        else
        {
            no;
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