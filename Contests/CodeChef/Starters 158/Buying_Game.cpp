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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[i] = x;
        }
        vector<int>costs;
        for (int i = 0; i < n; i++)
        {
            int minVal = min(a[i], b[i]);
            costs.push_back(minVal);
        }

        int minCost = 0;
        for (auto cost : costs)
        {
            // cout << cost << "\n";
            minCost += cost;
        }

        cout << minCost << '\n';
    }

    return 0;
}