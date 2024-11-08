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
        int n, m, q;
        cin >> n >> m >> q;
        set<int> teacherPos;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            teacherPos.insert(x);
        }

        for (int i = 0; i < q; i++)
        {
            int ans = 0;
            int x;
            cin >> x;
            bool flag = false;
            auto it = teacherPos.upper_bound(x);
            if (it == teacherPos.begin())
            {
                ans = *it - 1;
                flag = true;
            }
            if (!flag)
            {
                auto it2 = teacherPos.end();
                it2--;
                if (*it2 < x)
                {
                    ans = n - *it2;
                    flag = true;
                }
            }

            if (!flag)
            {
                auto up = teacherPos.upper_bound(x);
                auto low = teacherPos.upper_bound(x);
                --low;
                ans = (*up - *low) / 2;
            }
            cout << ans << nl;
        }
    }

    return 0;
}