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
        bool flag = true;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if(s[l] != '.' || s[r] != '.')
            {
                if(s[l] != s[r] && s[l] == 's')
                {
                    flag = false;
                    break;
                }
            }
            l++;
            r--;
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