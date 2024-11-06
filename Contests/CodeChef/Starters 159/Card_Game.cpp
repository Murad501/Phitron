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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i != x && (x + i) % 2 == 0)
            {
                ans++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}