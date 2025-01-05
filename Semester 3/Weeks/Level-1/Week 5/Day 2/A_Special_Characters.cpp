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
        if (n % 2 == 1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
            int len = n / 2;
            for (int i = 1; i <= len; i++)
            {
                if (i % 2 == 1)
                {
                    cout << "AA";
                }
                else
                {
                    cout << "BB";
                }
            }
            cout << nl;
        }
    }

    return 0;
}