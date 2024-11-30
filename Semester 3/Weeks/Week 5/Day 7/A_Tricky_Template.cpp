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
        string a, b, c;
        cin >> a >> b >> c;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (a[i] != c[i])
                {
                    flag = true;
                    break;
                }
            }

            if (a[i] != b[i])
            {
                if (a[i] != c[i] && b[i] != c[i])
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }

    return 0;
}