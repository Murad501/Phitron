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
        string s, t;
        cin >> s >> t;
        int s1 = 0, t1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                s1++;
            }
            if (t[i] == '1')
            {
                t1++;
            }
        }

        if ((s1 % 2 == 0 && t1 % 2 == 0) || (s1 % 2 == 1 && t1 % 2 == 1))
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