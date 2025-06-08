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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a;
        set<int> b;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
        }

        string s;

        for (int i = 1; i <= m; i++)
        {
            bool flag = true;
            int val = a[i - 1];
            for (int j = 1; j <= n; j++)
            {
                if (i != j)
                {

                    if (b.find(j) == b.end())
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if (flag)
            {
                s.push_back('1');
            }
            else
            {
                s.push_back('0');
            }
        }

        cout << s << nl;
    }

    return 0;
}