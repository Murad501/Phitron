#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int ans = 0;
    int start = 1;
    while (a * start <= t)
    {
        ans += b;
        start++;
    }

    cout << ans << '\n';

    return 0;
}