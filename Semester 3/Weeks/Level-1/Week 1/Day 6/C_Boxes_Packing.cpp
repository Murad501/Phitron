#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> values;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        values[x]++;
    }

    int ans = 0;
    for (auto [key, value] : values)
    {
        ans = max(ans, value);
    }

    cout << ans << '\n';

    return 0;
}