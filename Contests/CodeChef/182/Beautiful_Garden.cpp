// 16/04/2025 20:38
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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> v(n), temp(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
        temp[i] = x;
    }
    sort(temp.begin(), temp.end(), greater<int>());
    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;
    for (int i = 0; i < d; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (temp[j] < v[j])
            {

                temp[j]++;
            }
        }

        int curr = 0;

        for (int j = 0; j < n; j++)
        {
            if (temp[j] >= v[j])
            {
                if (curr < k)
                {

                    curr++;
                }
                else
                {
                    ans++;
                    temp[j] = 0;
                }
            }
        }
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