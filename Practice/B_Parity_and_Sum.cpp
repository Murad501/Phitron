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
        vector<int> v(n);

        int c_even = 0;
        int odd_mx = 0, even_mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                c_even++;
            if (v[i] % 2 == 0)
                even_mx = max(even_mx, v[i]);
            if (v[i] % 2 == 1)
                odd_mx = max(odd_mx, v[i]);
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0 && v[i] < odd_mx)
            {
                odd_mx = max(odd_mx, odd_mx + v[i]);
            }
        }

        // cout << odd_mx << " " << even_mx << endl;

        if (c_even == 0 || c_even == n)
        {
            cout << 0 << endl;
        }
        else if (even_mx < odd_mx)
        {
            cout << c_even << endl;
        }
        else
        {
            cout << c_even + 1 << endl;
        }
    }
    return 0;
}