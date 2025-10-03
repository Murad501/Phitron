// 15/09/2025 08:20
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

bool compare(const vector<int> &a, const vector<int> &b, int sz)
{

    int szA = a.size(), szB = b.size();
    if (szA < sz || szB < sz)
    {
        return szA > szB;
    }

    if (a[sz - 1] == b[sz - 1])
    {
        int i = sz;
        while (i < szA && i < szB && a[i] == b[i])
        {
            i++;
        }

        if (i == szA || i == szB)
        {
            return szA < szB;
        }

        return a[i] < b[i];
    }
    return a[sz - 1] < b[sz - 1];
}

void customSort(vector<vector<int>> &v, int idx)
{
    sort(v.begin(), v.end(), [&](const vector<int> &a, const vector<int> &b)
         { return compare(a, b, idx); });
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> temp;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        mx = max(mx, k);
        int ok = 0;
        vector<int> v;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        temp.push_back(v);
    }

    customSort(temp, 1);
    int start = 0;
    while (true)
    {
        int sz = temp[0].size();
        for (int j = start; j < sz; j++)
        {
            cout << temp[0][j] << " ";
        }

        if (sz == mx)
        {
            break;
        }
        customSort(temp, sz + 1);
        start = sz;
    }
    cout << nl;
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