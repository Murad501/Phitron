#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        unordered_set<int> seen;

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] >= 1 && arr[i] <= n)
            {
                seen.insert(arr[i]);
            }
        }

        int missingCount = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (seen.find(i) == seen.end())
            {
                ++missingCount;
            }
        }

        if (missingCount <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
