#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    map<int, int> values;
    values[a]++;
    values[b]++;
    values[c]++;
    values[d]++;

    int ans = 0;
    for (auto [key, value] : values)
    {
        if (value == 4)
        {
            ans = 2;
        }
        else if (value > 1)
        {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}