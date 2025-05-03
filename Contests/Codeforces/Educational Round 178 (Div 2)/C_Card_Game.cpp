// 28/04/2025 21:37
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a.push_back(i + 1);
        }
        else
        {
            b.push_back(i + 1);
        }
    }

    bool alice = true;
    if (a.size() == 0 || b.size() == 0)
    {
        if (a.size() == 0)
        {
            alice = false;
        }
    }
    else if (n == 2)
    {
        if (b[0] == 1)
        {
            alice = false;
        }
    }
    else if (a.size() == 1 || b.size() == 1)
    {
        if (a.size() == 1)
        {
            alice = false;
        }
    }
    else if ((a[0] == 1 && a[a.size() - 1] == n) || b[0] == 1 && b[b.size() - 1] == n)
    {
        if (b[0] == 1 && b[b.size() - 1] == n)
        {
            alice = false;
        }
    }
    else
    {
        int bobMax = b[b.size() - 1];

        int aliceMax = a[a.size() - 1];
        if (aliceMax == n)
        {
            aliceMax = a[a.size() - 2];
        }

        if (bobMax > aliceMax)
        {
            alice = false;
        }
    }
    if (alice)
    {
        cout << "Alice" << nl;
    }
    else
    {
        cout << "Bob" << nl;
    }

    // cout << "Alice -> ";
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << nl;
    // cout << "Bob -> ";
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << nl;
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