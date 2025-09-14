// 26/08/2025 14:22
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
    vector<int> v, prefix;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (i == 0)
        {
            prefix.push_back(x);
        }
        else
        {
            prefix.push_back(x + prefix[i - 1]);
        }
    }

    int l = 0, r = n / 2;
    if (n % 2 == 0)
    {
        r--;
    }


    int ans = 0;

    while (r > 1)
    {
        int sum = prefix[l + r];
        if (l > 0)
        {
            sum -= prefix[l - 1];
        }
        cout << "? " << (r - l) + 1 << " ";
        for (int i = l; i <= l + r; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;

        cout << flush;

        int x;
        cin >> x;
        if (x > sum)
        {
            ans = l;
            int total = r - l + 1;
            r = total / 2;
            if (total % 2 == 0)
            {
                r--;
            }
        }
        else
        {
            l = (l + r + 1);
            int total = n - l;
            r = total / 2;
            if (total % 2 == 0)
            {
                r--;
            }
        }
    }
    cout << "! " << ans << endl;
    cout << flush;
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