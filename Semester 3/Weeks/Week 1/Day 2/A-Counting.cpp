#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int ans = b - a;
    if (ans <= 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << ans+1 << '\n';
    }

    return 0;
}