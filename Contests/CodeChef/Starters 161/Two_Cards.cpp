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
        map<int, int> mp;
        vector<int> valA, valB;
        map<int, vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i;
            valA.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x].push_back(i);
            valB.push_back(x);
        }

        int maxOfA = mp.rbegin()->first;
        int maxOfAIdx = mp.rbegin()->second;

        int maxOfB = v.rbegin()->first;
        vector<int> indexes = v.rbegin()->second;
        if (maxOfA == maxOfB)
        {
            int idxSize = indexes.size();
            if (idxSize == 1)
            {
                if (maxOfAIdx == indexes[0])
                {
                    cout << "Yes" << nl;
                }
                else
                {
                    cout << "No" << nl;
                }
            }
            else
            {
                cout << "No" << nl;
            }
        }
        else if (maxOfA > maxOfB)
        {
            cout << "Yes" << nl;
        }
        else
        {
            if (indexes.size() == 1)
            {
                cout << "Yes" << nl;
            }
            else
            {
                int count = 0, maxCount = 0;
                for (auto it = mp.rbegin(); it != mp.rend(); ++it)
                {
                    if (count == indexes.size())
                    {
                        break;
                    }
                    if (valB[it->second] == maxOfB)
                    {
                        maxCount++;
                    }
                    else
                    {
                        count++;
                    }
                }

                if (maxCount > 1)
                {
                    cout << "No" << nl;
                }
                else
                {
                    cout << "Yes" << nl;
                }
            }
        }
    }
    return 0;
}