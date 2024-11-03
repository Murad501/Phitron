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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            int x = a[i];
            int y = a[n - i - 1];

            if (a[i - 1] == x || a[n - 1] == y || a[i - 1] == y || a[n - 1] == x)
            {
                swap(a[x], a[y]);
                cnt++;
            }
        }

        cout << cnt << endl;

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     int x = a[i];
        //     int y = a[i + 1];
        //     cout << x << " " << y << endl;
        //     // if (a[i] == a[i + 1])
        //     // {
        //     //     cnt++;
        //     // }
        // }
        // cout << cnt << endl;
    }
    return 0;
}
