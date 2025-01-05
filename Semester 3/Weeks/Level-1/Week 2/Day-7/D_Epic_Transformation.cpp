#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
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

        multiset<int, greater<int>> sortedLengths;
        for (auto [key, value] : values)
        {
            sortedLengths.insert(value);
        }

        while (true)
        {
            auto firstItem = sortedLengths.begin();
            if (firstItem == sortedLengths.end())
            {
                break;
            }
            auto secondItem = sortedLengths.begin();
            secondItem++;
            if (secondItem == sortedLengths.end())
            {
                break;
            }
            int firstValue = *firstItem;
            int secondValue = *secondItem;
            if (firstValue > 1)
            {
                sortedLengths.insert(firstValue - 1);
            }
            if (secondValue > 1)
            {
                sortedLengths.insert(secondValue - 1);
            }
            sortedLengths.erase(firstItem);
            sortedLengths.erase(secondItem);
        }

        if (sortedLengths.empty())
        {
            cout << 0 << nl;
        }
        else
        {
            cout << *sortedLengths.begin() << nl;
        }
    }
    return 0;
}