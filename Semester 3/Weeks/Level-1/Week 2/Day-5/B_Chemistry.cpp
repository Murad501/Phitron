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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> counts;
        for (char c : s)
        {
            counts[c]++;
        }

        int oddCount = 0;
        for (auto [key, value] : counts)
        {
            if (value % 2 != 0)
            {
                oddCount++;
            }
        }

        bool flag = true;
        if (oddCount >= k)
        {
            if ((oddCount == k) || (oddCount - 1) == k)
            {
                flag = true;
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