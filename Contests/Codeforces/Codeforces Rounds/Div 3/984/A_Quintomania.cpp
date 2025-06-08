#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> values;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            values.push_back(a);
        }

        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {

            int val = abs(values[i] - values[i + 1]);

            if (val == 5 || val == 7)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        values.clear();
    }
    return 0;
}