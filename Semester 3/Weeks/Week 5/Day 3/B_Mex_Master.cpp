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
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                zero++;
            }
        }

        if (n % 2 == 0)
        {
            if (zero > n / 2)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
        else
        {
            if (zero > ((n / 2) + 1))
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
    }
    return 0;
}