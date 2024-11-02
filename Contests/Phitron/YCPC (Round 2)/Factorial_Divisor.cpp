#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        bool flag = false;
        if (d <= n)
        {
            flag = true;
        }
        else
        {
            for (int i = 2; i <= n; i++)
            {
                if (d % i == 0)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}