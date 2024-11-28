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
        int n;
        cin >> n;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            total += x;
        }

        int totalNeed = (n + 1) * 50;
        int diff = totalNeed - total;
        if (diff > 100)
        {
            cout << -1 << nl;
        }
        else
        {
            if (diff < 0)
            {
                cout << 0 << nl;
            }
            else
            {
                cout << diff << nl;
            }
        }
    }
    return 0;
}