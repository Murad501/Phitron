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
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }

        bool red = false;
        for (int i = 0; i < 8; i++)
        {
            bool ok = true;
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] != 'R')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                red = true;
                break;
            }
        }
        if (red)
        {
            cout << "R" << nl;
        }
        else
        {
            cout << "B" << nl;
        }
    }
    return 0;
}