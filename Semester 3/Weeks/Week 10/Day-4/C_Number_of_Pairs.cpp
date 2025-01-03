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
    int n, L, R;
    cin >> n >> L >> R;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val = v[i];
        if (val >= R)
        {
            continue;
        }

        if ((L % 2 == 0 && val < L / 2) || (L % 2 == 1 && val <= L / 2))
        {
            break;
        }

        int l = i, r = n - 1, mid;
        int targetedVal;
        if (val >= L)
        {
            targetedVal = R - val;
            int idx = -1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (v[mid] > targetedVal)
                {
                    l = mid + 1;
                }
                else
                {
                    if (mid != i)
                    {
                        idx = mid;
                        r = mid - 1;
                    }
                    else
                    {

                        l = mid + 1;
                    }
                }
            }
            if (idx != -1)
            {

                ans += n - idx;
            }
        }
        else
        {
            int smallVal = L - val;
            int bigVal = R - val;
            int smallIdx = -1, bigIdx = -1;

            int l = i, r = n - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (v[mid] <= bigVal && v[mid] >= smallVal)
                {

                    bigIdx = mid;

                    l = mid + 1;
                }
                else if (v[mid] > bigVal)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            l = i, r = n - 1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (v[mid] <= bigVal && v[mid] >= smallVal)
                {
                    if (mid != i)
                    {
                        smallIdx = mid;
                        r = mid - 1;
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }
                else if (v[mid] > bigVal)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (smallIdx != -1 && bigIdx != -1)
            {
                ans += bigIdx - smallIdx + 1;
            }
        }
    }
    cout << ans << nl;
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