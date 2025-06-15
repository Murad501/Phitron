// 08/06/2025 21:06
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
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    bool ok1 = true, ok2 = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i] <= v[i - 1])
        {
            ok1 = false;
        }
        if (v[i] >= v[i - 1])
        {
            ok2 = false;
        }
    }

    if (!ok1 && !ok2 && n > 2 && s.size() > 1)
    {
        no;
    }
    // else if (s.size() == 1)
    // {

    //     if (n & 1)
    //     {
    //         if (v[0] == (n * 1.5))
    //         {
    //             yes;
    //         }
    //         else
    //         {
    //             no;
    //         }
    //     }
    //     else
    //     {
    //         no;
    //     }
    // }
    else
    {

        bool ok = true;
        if (n > 2 && s.size() > 1)
        {
            int sum = v[0] + v[n - 1];
            int l = 0, r = n - 1;
            while (l <= r)
            {
                int curr = v[l] + v[r];
                curr /= 2;
                curr *= 2;
                if (curr != sum)
                {
                    ok = false;
                    break;
                }
                l++, r--;
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
        else
        {

            ok = false;
            int mn = min(v[0], v[1]);
            int mx = max(v[0], v[1]);
            int l = 1, r = mx / 2;
            if (mx & 1)
            {
                r++;
            }
            // cout<<l<<" "<<r<<nl;
            while (l <= r)
            {
                int mid = (r + l) / 2;
                if ((mn - mid) == (mx - (mid * 2)))
                {
                    mn = (mn - mid), mx = (mx - (mid * 2));
                    // cout<<mn<<nl;
                    ok = true;
                    break;
                }
                else if ((mn - mid) > (mx - (mid * 2)))
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            // cout << mn << " " << mx << nl;
            if (mn == mx)
            {
                int val = n / 1.5;
                if ((mn % (val) ) == 0)
                {
                    yes;
                }
                else
                {
                    no;
                }
            }
            else if (mn * 2 == mx)
            {
                yes;
            }
            else
            {
                // cout<<mn<<" "<<mx<<nl;
                no;
            }
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