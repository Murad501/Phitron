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
        vector<int> v;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
            if (i != 0)
            {
                if (x == v[i - 1])
                {
                    continue;
                }
            }
            v.push_back(x);
        }

        bool flag = true;
        if (n > 2)
        {
            for (int i = 0; i < v.size() - 2; i++)
            {
                int a = v[i];
                int b = v[i + 1];
                int c = v[i + 2];
                if ((a > b && b > c) || (a < c && b < a) || (a < c && b > c))
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            if (n > 2)
            {
                for (auto [key, indexes] : mp)
                {
                    int sz = indexes.size();
                    if (sz > 1)
                    {
                        for (int i = 0; i < sz - 1; i++)
                        {
                            int x = indexes[i];
                            int y = indexes[i + 1];
                            if (y - x > 1)
                            {
                                if (y == n - 1 && indexes[0] == 0)
                                {
                                    continue;
                                }
                                else
                                {

                                    flag = false;
                                    break;
                                }
                            }
                        }
                    }
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
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}