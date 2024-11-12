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
        int n, x, y;
        cin >> n >> x >> y;
        if (n % 2 == 0)
        {
            int a = n * x;
            int b = (n / 2) * y;
            cout << max(a, b) << nl;
        }
        else
        {
            int a = n * x;
            int b = ((n / 2) * y) + x;
            cout << max(a, b) << nl;
        }
    }

    return 0;
}