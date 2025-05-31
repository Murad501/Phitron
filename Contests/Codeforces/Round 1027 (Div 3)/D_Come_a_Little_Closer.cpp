// 26/05/2025 21:20
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
    map<int, set<int>> rw, cl;
    int mnRow = INT_MAX, mnCol = INT_MAX;
    int mxRow = INT_MIN, mxCol = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        rw[x].insert(y);
        cl[y].insert(x);
        mnRow = min(mnRow, x);
        mnCol = min(mnCol, y);
        mxRow = max(mxRow, x);
        mxCol = max(mxCol, y);
    }
    if (n < 3)
    {
        cout << n << nl;
        return;
    }

    int rrw = (mxRow - mnRow) + 1;
    int cll = (mxCol - mnCol) + 1;
    int val = rrw * cll;
    int ans = val;

    auto it = rw.begin();
    if (it->second.size() == 1)
    {
        int row = it->first;
        int col = *it->second.begin();
        rw.erase(it);
        cl[col].erase(row);
        if (cl[col].empty())
        {
            cl.erase(col);
        }
        mnRow = rw.begin()->first;
        mxRow = rw.rbegin()->first;
        mnCol = cl.begin()->first;
        mxCol = cl.rbegin()->first;
        // cout << mnRow << " " << mxRow << " " << mnCol << " " << mxCol << nl;
        int rrw = (mxRow - mnRow) + 1;
        int cll = (mxCol - mnCol) + 1;
        int val = rrw * cll;
        if (val == (n - 1))
        {
            int val1 = (rrw + 1) * cll;
            int val2 = rrw * (cll + 1);
            val = min(val1, val2);
        }

        ans = min(ans, val);
        rw[row].insert(col);
        cl[col].insert(row);
    }
    it = rw.end();

    it--;
    if (it->second.size() == 1)
    {
        int row = it->first;
        int col = *it->second.begin();
        rw.erase(it);
        cl[col].erase(row);
        if (cl[col].empty())
        {
            cl.erase(col);
        }
        mnRow = rw.begin()->first;
        mxRow = rw.rbegin()->first;
        mnCol = cl.begin()->first;
        mxCol = cl.rbegin()->first;
        int rrw = (mxRow - mnRow) + 1;
        int cll = (mxCol - mnCol) + 1;
        int val = rrw * cll;
        if (val == (n - 1))
        {
            int val1 = (rrw + 1) * cll;
            int val2 = rrw * (cll + 1);
            val = min(val1, val2);
        }
        rw[row].insert(col);
        cl[col].insert(row);

        ans = min(ans, val);
    }

    it = cl.begin();
    if (it->second.size() == 1)
    {
        int col = it->first;
        int row = *it->second.begin();
        cl.erase(it);
        rw[row].erase(col);
        if (rw[row].empty())
        {
            rw.erase(row);
        }
        mnRow = rw.begin()->first;
        mxRow = rw.rbegin()->first;
        mnCol = cl.begin()->first;
        mxCol = cl.rbegin()->first;

        int rrw = (mxRow - mnRow) + 1;
        int cll = (mxCol - mnCol) + 1;
        int val = rrw * cll;
        if (val == (n - 1))
        {
            int val1 = (rrw + 1) * cll;
            int val2 = rrw * (cll + 1);
            val = min(val1, val2);
        }

        ans = min(ans, val);
        rw[row].insert(col);
        cl[col].insert(row);
    }
    it = cl.end();
    it--;
    if (it->second.size() == 1)
    {
        int col = it->first;
        int row = *it->second.begin();
        cl.erase(it);
        rw[row].erase(col);
        if (rw[row].empty())
        {
            rw.erase(row);
        }
        mnRow = rw.begin()->first;
        mxRow = rw.rbegin()->first;
        mnCol = cl.begin()->first;
        mxCol = cl.rbegin()->first;

        int rrw = (mxRow - mnRow) + 1;
        int cll = (mxCol - mnCol) + 1;
        int val = rrw * cll;
        if (val == (n - 1))
        {
            int val1 = (rrw + 1) * cll;
            int val2 = rrw * (cll + 1);
            val = min(val1, val2);
        }

        ans = min(ans, val);
        rw[row].insert(col);
        cl[col].insert(row);
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