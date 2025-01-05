#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        mp['T'] = 1;
        mp['i'] = 1;
        mp['m'] = 1;
        mp['u'] = 1;
        mp['r'] = 1;

        if (n == 5)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'T')
                {
                    mp['T']--;
                }
                else if (s[i] == 'i')
                {
                    mp['i']--;
                }
                else if (s[i] == 'm')
                {
                    mp['m']--;
                }
                else if (s[i] == 'u')
                {
                    mp['u']--;
                }
                else if (s[i] == 'r')
                {
                    mp['r']--;
                }
            }
        }

        bool ans = true;
        for (auto [key, value] : mp)
        {
            if (value != 0)
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}