#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v;
    int sum[n] = {0};
    sum[0] = 1;
    sum[1] = 2;

    for (int i = 1; i <= n / 2; i++)
    {
        v.push_back(i);
        v.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (i > 1)
        {
            sum[i] = sum[i - 1] + v[i];
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // if (r == 1)
        // {
        //     cout << 1 << endl;
        // }
        // else if (l == 1)
        // {
        //     cout << sum[r - 1] << endl;
        // }
        // else
        // {
        //     cout << sum[r - 1] - sum[l - 2] << endl;
        // }
    }

    return 0;
}