// 10/11/2025 22:22
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    vector<int> a, b, mnA, mxA;
    vector<int> mnB(n), mxB(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        mnA.push_back(mn);
        mxA.push_back(mx);
    }
    mn = INT_MAX, mx = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        mn = min(mn, b[i]);
        mx = max(mx, b[i]);
        mnB[i] = mn, mxB[i] = mx;
    }

    int ansMn = INT_MAX, ansMx = INT_MIN;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int tempMn = min(mnA[i], mnB[i]);
        int tempMx = max(mxA[i], mxB[i]);
        int right = ((2 * n) - tempMx) + 1;
        if (i == 0)
        {

            ans += (tempMn * right);
        }
        else
        {
            int insideL = max(0LL, (tempMn - ansMn));
            int outsideL = max(0LL, ansMn - tempMn);
            int insideR = max(0LL, (ansMx - tempMx));
            int outsideR = max(0LL, tempMx - ansMx);
            cout << insideL << " " << outsideL << " " << insideR << " " << outsideR << nl;

            ans += (insideL * outsideR);
            ans += (outsideL * insideR);
        }
        ansMx = max(ansMx, tempMx);
        ansMn = min(ansMn, tempMn);
    }

    cout << ans << nl;
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