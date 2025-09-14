// 11/05/2025 21:16
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int maxVal = abs(v[0]);
    int minVal = maxVal * -1;
    // cout << maxVal << " " << minVal << nl;
    sort(all(v));
    int cnt = 0, cnt2 = 0, need = n / 2;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (abs(v[i]) == maxVal && cnt2 == 0)
        {
            cnt2++;
        }
        else if (abs(v[i]) >= maxVal)
        {
            cnt++;
        }
        if (cnt == need)
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        yes;
    }
    else
    {

        cnt = 0, cnt2 = 0, need = n / 2;
        if (n % 2 == 0)
        {
            need--;
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(v[i]) * -1 == minVal && cnt2 == 0)
            {
                cnt2++;
            }
            else if (abs(v[i]) * -1 <= minVal)
            {
                cnt++;
            }
            if (cnt == need)
            {
                ok = true;
                break;
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