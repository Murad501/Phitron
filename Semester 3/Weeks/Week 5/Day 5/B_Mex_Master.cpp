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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int current = 0;

        for (auto [key, value] : mp)
        {
            if (current != key)
            {
                break;
            }

            if (key == 0)
            {
                if (n % 2 == 0)
                {
                    if (value <= n / 2)
                    {
                        break;
                    }
                }
                else
                {
                    if (value <= (n / 2) + 1)
                    {
                        break;
                    }
                }
            }
            else
            {
                if (n == value && key == 1)
                {
                    current++;
                    break;
                }
                break;
            }
            current++;
            n -= value;
        }
        cout << current << nl;
    }
    return 0;
}