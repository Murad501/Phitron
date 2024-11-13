#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
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

    int l1 = 0, l2 = 0;
    ll ans = 0;
    while (l1 < n && l2 < m)
    {
        int current = a[l1], count1 = 0, count2 = 0;
        while (l1 < n && a[l1] == current)
        {
            count1++;
            l1++;
        }
        while (l2 < m && current > b[l2])
        {
            l2++;
        }
        while (l2 < m && b[l2] == current)
        {
            count2++;
            l2++;
        }

        ans += (1LL * count1 * count2);
    }
    cout << ans << nl;

    return 0;
}