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
        int ans = (n / 7);
        int mod = n % 7;
        if (mod >= 2)
        {
            ans++;
        }
        cout << ans << nl;
    }

    return 0;
}