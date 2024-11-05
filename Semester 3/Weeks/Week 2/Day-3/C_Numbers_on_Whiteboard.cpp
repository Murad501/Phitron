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
        priority_queue<int> items;
        vector<pair<int, int>> chosenItems;

        int n;
        cin >> n;
        for (int i = n; i >= 1; i--)
        {
            items.push(i);
        }

        for (int i = 0; i < n - 1; i++)
        {
            int num1 = items.top();
            items.pop();
            int num2 = items.top();
            items.pop();
            int generated = ceil((num1 + num2) / 2);
            if ((num1 + num2) % 2 == 1)
            {
                generated++;
            }
            items.push(generated);
            chosenItems.push_back({num1, num2});
        }
        cout << items.top() << nl;
        for (auto it : chosenItems)
        {
            cout << it.first << " " << it.second << nl;
        }
    }
    return 0;
}