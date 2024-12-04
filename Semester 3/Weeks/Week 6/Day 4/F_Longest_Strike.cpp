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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        pair<int, int> ans;
        int first = -1;
        int last = -1;

        for (auto [key, value] : mp)
        {
            if (value < k)
            {
                if (first != -1)
                {
                    ans = make_pair(first, last);
                }
                first = -1;
                last = -1;
            }
            else
            {
                if (first == -1)
                {
                    first = key;
                    last = key;
                }
                else
                {
                    last = key;
                }
            }
        }
    }

    return 0;
}