#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, t;
    cin >> s >> t;
    int count = 0;

    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                int sum = i + j + k;
                int multiply = i * j * k;
                if (sum <= s && multiply <= t)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
