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
        int x;
        cin >> x;
        int maxBit = __lg(x);
        int b = pow(2, maxBit);
        cout << x - b << " " << b << nl;
    }
    return 0;
}