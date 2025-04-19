#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;
        cin >> n;
        int w;
        cin >> w;

        map<int, int> mp;

        set<int, greater<int>> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (mp[x] == 0)
            {
                v.insert(x);
            }

            mp[x]++;
        }

        int ans = 0;
        while (!mp.empty())
        {
            ans++;
            int sum = 0;

            for (int val : v)
            {
                int cnt = mp[val];
                for (int j = 0; j < cnt; j++)
                {
                    if (sum + val <= w)
                    {
                        sum += val;
                        mp[val]--;
                    }
                    else
                    {
                        break;
                    }
                }

                if (mp[val] == 0)
                {

                    mp.erase(val);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}