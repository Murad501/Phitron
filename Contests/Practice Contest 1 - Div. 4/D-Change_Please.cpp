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
        int x;
        cin >> x;

        int dGive = 100 - x;
        int mod = dGive % 10;
        int ans = dGive - mod;
        cout << ans << endl;
    }
    return 0;
}