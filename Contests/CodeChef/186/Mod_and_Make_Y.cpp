// 14/05/2025 22:14
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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> ans;
    vector<int> items;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int target = x;
        items.push_back(v[i]);
        s.insert(v[i]);
        sort(items.rbegin(), items.rend());
        int sz = items.size();
        int mx = v[0];
        bool flag = false;
        cout << "target " << target << nl;
        for (int j = 1; j * j <= target; j++)
        {
            if (target % j == y || target % (target/j) == y)
            {
                if (s.count(j) || s.count(target / j))
                {

                    ans.push_back(i + 1);
                    flag = true;
                    break;
                }
            }
            if (j > mx)
            {
                break;
            }
        }
        if (flag)
        {
            continue;
        }

        for (int j = 0; j < sz - 1; j++)
        {
            target = target % v[i];
            for (int k = 1; k * k <= target; k++)
            {
                if (target % k == 0)
                {
                    if (s.count(k) || s.count(target / k))
                    {

                        ans.push_back(i + 1);
                        flag = true;
                        break;
                    }
                }
                if (k > mx)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
    }
    cout << ans.size() << nl;
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