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
        deque<int> values;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            values.push_back(x);
        }

        int lIdx = 1;
        int rIdx = n;
        int minV = 1;
        int maxV = n;
        int l = 0;
        int r = n - 1;
        bool flag = false;
        if (n < 4)
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < n - 3; i++)
            {
                if (values[l] == minV)
                {
                    values.pop_front();
                    r--;
                    lIdx++;
                    minV++;
                }
                else if (values[l] == maxV)
                {
                    values.pop_front();
                    r--;
                    lIdx++;
                    maxV--;
                }
                else if (values[r] == minV)
                {
                    values.pop_back();
                    r--;
                    minV++;
                    rIdx--;
                }
                else if (values[r] == maxV)
                {
                    values.pop_back();
                    r--;
                    maxV--;
                    rIdx--;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << lIdx << " " << rIdx << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}