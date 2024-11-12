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
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b[i] = x;
    }

    int al = 0;
    int bl = 0;
    int ans = 0;

    while (bl < m)
    {

        if (al < n && a[al] < b[bl])
        {
            al++;
            ans++;
        }
        else
        {
            bl++;
            cout << ans << " ";
        }
    }

    return 0;
}