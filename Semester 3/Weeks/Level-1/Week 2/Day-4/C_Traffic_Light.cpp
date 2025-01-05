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
        char c;
        cin >> c;
        string s;
        cin >> s;

        set<int> cIndexes;
        set<int> gIndexes;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                cIndexes.insert(i);
            }
            if (s[i] == 'g')
            {
                gIndexes.insert(i);
            }
        }

        int ans = 0;
        if (c != 'g')
        {
            for (int it : cIndexes)
            {
                auto item = gIndexes.upper_bound(it);
                if (item != gIndexes.end())
                {
                    int current = *item - it;
                    ans = max(ans, current);
                }
                else
                {
                    int current = n - it + *gIndexes.begin();
                    ans = max(ans, current);
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}