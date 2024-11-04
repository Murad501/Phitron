#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> problems;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        problems.insert(a);
    }

    int ans = 0;
    int day = 1;

    while (day <= n)
    {
        auto it = problems.lower_bound(day);
        if (it != problems.end())
        {
            ans++;
            problems.erase(it);
        }
        day++;
    }
    cout << ans << endl;

    return 0;
}