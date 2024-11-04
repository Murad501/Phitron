#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        int odd = 0;
        for (auto [key, value] : mp)
        {
            if (value % 2 == 1)
            {
                odd++;
            }
        }

        bool ans = false;
        if (odd)
        {
            if (odd >= k)
            {
                if (odd - k == 0 || odd - k == 1)
                {
                    ans = true;
                }
            }
            else
            {
                int availablK = k - odd;
                if (availablK % 2 == 0)
                {
                    ans = true;
                }
                else if (n - k == 1)
                {
                    ans = true;
                }
            }
        }else{
            ans = true;
        }

        if (ans)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}