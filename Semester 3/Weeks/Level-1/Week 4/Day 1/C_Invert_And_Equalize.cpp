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
        string s;
        cin >> s;

        int sepOne = 0;
        int sepZero = 0;
        char prev = 'x';
        for (int i = 0; i < n; i++)
        {

            if (s[i] != prev)
            {

                if (s[i] == '1')
                {
                    sepOne++;
                }
                else
                {
                    sepZero++;
                }
            }
            prev = s[i];
        }


        cout << min(sepZero, sepOne) << nl;
    }
    return 0;
}