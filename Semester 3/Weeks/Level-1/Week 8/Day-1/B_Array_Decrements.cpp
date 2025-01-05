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
        vector<int> a, b;
        int maxB = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxB = max(maxB, x);

            b.push_back(x);
        }

        bool flag = true;
        int diff = INT_MIN;
        int diffWithZero = INT_MIN;

        if (maxB > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] < b[i])
                {
                    flag = false;
                    break;
                }
                if (a[i] == 0 && b[i] == 0)
                {
                    continue;
                }
                if (b[i] == 0)
                {

                    if (a[i] - b[i] > diff)
                    {
                        diffWithZero = max(diffWithZero, a[i]);
                    }
                    continue;
                }
                
                if (diff == INT_MIN)
                {
                    diff = a[i] - b[i];
                }
                else
                {

                    if (a[i] - b[i] != diff)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            if (diff >= diffWithZero)
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