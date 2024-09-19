#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    // int a, b, c, d, e;
    // cin >> a >> b >> c >> d >> e;

    // int minNum = min(a, b);
    // int maxNum = max(a, b);

    // int mn = min({a, b, c, d, e});
    // int mx = max({a, b, c, d, e});

    // cout << minNum << endl;
    // cout << maxNum << endl;

    // cout << mn << endl;
    // cout << mx << endl;

    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}