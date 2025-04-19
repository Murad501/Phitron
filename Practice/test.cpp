#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s, r;
        cin >> s;
        set<int> v;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        cin >> r;
        sort(r.begin(), r.end());
        int idx = 0;
        for (auto x : v)
        {
            s[x - 1] = r[idx];
            idx++;
        }

        cout << s << endl;
    }

    return 0;
}