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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool flag = false;
        if (s == t)
        {
            flag = true;
        }
        else
        {
            int pos = -1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    pos = i;
                    break;
                }
            }

            if (pos != -1)
            {
                bool ok = true;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] != t[i])
                    {
                        if (pos > i)
                        {
                            ok = false;
                            break;
                        }
                    }
                }
                if (ok)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
            else
            {
                flag = false;
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