#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> M(m);
    for (int i = 0; i < m; i++)
    {
        cin >> M[i];
    }
    sort(M.begin(), M.end());
    while (q--)
    {
        int x;
        cin >> x;
        auto f = upper_bound(M.begin(), M.end(), x);
        auto b = f;
        if (b != M.begin())
        {
            --b;
        }
        if (f == b)
        {
            cout << (*f) - 1 << "\n";
        }
        else if (f == M.end())
        {
            cout << n - (*b) << "\n";
        }
        else
        {
            int l = x - (*b);
            int r = (*f) - x;
            cout << min(l, r) << "\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}