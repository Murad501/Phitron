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
        vector<int> v, zerosPos;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int ans = 0;
        bool found = false, flag = false;
        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (!found && v[i] != 0)
            {
                found = true;
                idx = i;
                continue;
            }

            if (found && v[i] != 0)
            {
                if (i - idx > 1)
                {

                    flag = true;
                    break;
                }
                else
                {
                    idx = i;
                }
            }
        }
        if (found && flag)
        {
            ans = 2;
        }
        else if (found)
        {
            ans = 1;
        }

        cout << ans << nl;
    }

    return 0;
}