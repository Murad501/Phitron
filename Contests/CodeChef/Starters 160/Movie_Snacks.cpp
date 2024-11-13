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
    int x, y, z;
    cin >> x >> y >> z;
    int combPrice = (z * 2) + y;
    int withOutComboPrice = (x * 2) + (y * 3);

    cout << min(combPrice, withOutComboPrice) << nl;
    return 0;
}