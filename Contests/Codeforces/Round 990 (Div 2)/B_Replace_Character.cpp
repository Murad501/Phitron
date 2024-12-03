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
        map<char, int> mp, minT, maxT;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        if (mp.size() == 1)
        {
            cout << s << nl;
        }
        else
        {
            int minCo = n;
            char minC;
            int maxCo = 0;
            char maxC;

            for (auto [key, value] : mp)
            {
                if (value < minCo)
                {
                    minCo = value;
                    minC = key;
                }

                if (value > maxCo)
                {
                    maxCo = value;
                    maxC = key;
                }
            }
            if (maxC == minC)
            {
                bool flag = true;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] != minC && flag)
                    {
                        cout << maxC;
                        flag = false;
                    }
                    else
                    {
                        cout << s[i];
                    }
                }
            }
            else
            {
                bool flag = true;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == minC && flag)
                    {
                        cout << maxC;
                        flag = false;
                    }
                    else
                    {
                        cout << s[i];
                    }
                }
            }
            cout << nl;
        }
    }
    return 0;
}