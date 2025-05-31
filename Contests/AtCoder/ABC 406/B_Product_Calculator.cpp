// 17/05/2025 18:10
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

int calculateDigits(int val)
{
    int dig = 0;
    while (val)
    {
        dig++;
        val /= 10;
    }
    return dig;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string a = to_string(ans);
        string b = to_string(x);
        int y = a[0] - '0', z = b[0] - '0';
        int len = (a.length() - 1) + (b.length() - 1);
        if ((y * z) < 10)
        {
            len++;
        }
        else
        {
            len += 2;
        }

        if (len > k)
        {
            ans = 1;
        }
        else
        {
            ans = ans * x;
        }
        string temp = to_string(ans);
        int t = temp.length();
        if (t > k)
        {
            ans = 1;
        }
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}