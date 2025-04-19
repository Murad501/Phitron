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
    int n;
    cin >> n;
    vector<int> a, b;
    map<int, int> ma, mb;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        ma[x] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
        mb[x] = i;
    }
    int sameCnt = 0, same = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            sameCnt++;
            same = a[i];
        }
    }
    if ((sameCnt > 1) || (sameCnt == 1 && n % 2 == 0))
    {
        minus;
    }
    else
    {

        bool flag = true;
        vector<pair<int, int>> ans;
        int l = n / 2, r = n / 2;
        if (n % 2 == 0)
        {
            l--;
        }
        while (l >= 0 && r < n)
        {
            if (sameCnt == 1)
            {
                sameCnt--;

                if (a[l] != same)
                {
                    int idx = ma[same];

                    swap(a[idx], a[r]);
                    swap(b[idx], b[r]);
                    ma[a[idx]] = idx;
                    ma[a[r]] = r;
                    mb[b[idx]] = idx;
                    mb[b[r]] = r;
                    ans.push_back({l, idx});
                    l--, r++;
                    continue;
                }
            }
            int val = a[l];
            if (a[l] != b[r])
            {
                int idx = mb[val];
                if (a[idx] != b[l])
                {
                    flag = false;
                    break;
                }
                else
                {
                    ans.push_back({r, idx});
                    swap(b[r], b[idx]);
                    swap(a[r], a[idx]);
                    ma[a[r]] = r;
                    ma[a[idx]] = idx;
                    mb[b[r]] = r;
                    mb[b[idx]] = idx;
                }
            }
            else
            {
                if (b[l] != a[r])
                {
                    flag = false;
                    break;
                }
            }
            l--;
            r++;
        }

        if (!flag)
        {
            minus;
        }
        else
        {
            int sz = ans.size();
            cout << sz << nl;
            for (int i = 0; i < sz; i++)
            {
                cout << ans[i].first + 1 << " " << ans[i].second + 1 << nl;
            }
        }
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