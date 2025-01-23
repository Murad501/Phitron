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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a, b, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        b.push_back(x);
    }

    bool ok = true;
    int i = 0, j = 0;
    while (i < n || j < m)
    {
        if (i < n && j < m)
        {

            if (a[i] > k && b[j] > k)
            {
                ok = false;
                break;
            }
            if (a[i] == 0 || b[j] == 0)
            {
                ans.push_back(0);
                k++;
                if (a[i] == 0)
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
            else
            {

                if (a[i] <= b[j])
                {
                    ans.push_back(a[i]);

                    i++;
                }
                else
                {
                    ans.push_back(b[j]);

                    j++;
                }
            }
        }
        else
        {

            if (i < n)
            {
                if (a[i] == 0)
                {
                    k++;
                }
                if (a[i] > k)
                {
                    ok = false;
                    break;
                }
                ans.push_back(a[i]);
                i++;
            }
            else
            {

                if (b[j] == 0)
                {
                    k++;
                }
                if (b[j] > k)
                {
                    ok = false;
                    break;
                }
                ans.push_back(b[j]);
                j++;
            }
        }
    }
    if (ok)
    {
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << nl;
    }
    else
    {
        minus;
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