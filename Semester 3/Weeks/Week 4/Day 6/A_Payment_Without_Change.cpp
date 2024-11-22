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
    int q;
    cin >> q;
    while (q--)
    {
        ll a, b, n, S;
        cin >> a >> b >> n >> S;
        if (S <= b)
        {
            cout << "YES" << nl;
        }
        else
        {

            ll ml = a * n;
            if (S > ml + b)
            {
                cout << "NO" << nl;
            }
            else
            {
                int x = S % n;
                if (x <= b)
                {
                    cout << "YES" << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
        }
    }
    return 0;
}