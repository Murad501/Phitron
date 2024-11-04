#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, set<int>> values;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            values[x].insert(i);
        }

        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;

            auto itOfA = values.find(a);
            auto itOfB = values.find(b);

            if (itOfA != values.end() && itOfB != values.end())
            {
                int indexOfA = *itOfA->second.begin();
                int indexOfB = *itOfB->second.rbegin();

                if (indexOfA < indexOfB)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}