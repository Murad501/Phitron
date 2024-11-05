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
        int x, y, z;
        cin >> x >> y >> z;

        ll timeNeed = x * y;
        ll timeHave = z * 24 * 60;
        if (timeNeed <= timeHave)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}