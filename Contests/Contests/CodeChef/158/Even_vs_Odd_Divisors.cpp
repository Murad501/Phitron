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
        int n;
        cin >> n;

        int even = 0;
        int odd = 0;

        for (int i = 1; i <= n / 2; i++)
        {

            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }

        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (even == odd)
        {
            cout << 0 << '\n';
        }
        else if (even < odd)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }

    return 0;
}