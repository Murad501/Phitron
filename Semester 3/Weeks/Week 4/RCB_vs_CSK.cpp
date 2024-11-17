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
    int x, y;
    cin >> x >> y;
    if (x - y >= 18)
    {
        cout << "RCB" << nl;
    }
    else
    {
        cout << "CSK" << nl;
    }
    return 0;
}