#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     map<int, int> mp;

//     int q;
//     cin >> q;

//     int largestVal = INT_MIN;
//     int maxTimes = INT_MIN;

//     while (q--)
//     {
//         int x;
//         cin >> x;
//         if (x == 1)
//         {
//             int v;
//             cin >> v;
//             mp[v]++;
//             int itemTimes = mp[v];

//             if (itemTimes > maxTimes)
//             {
//                 maxTimes = itemTimes;
//                 largestVal = v;
//             }
//             else if (itemTimes == maxTimes)
//             {
//                 largestVal = max(largestVal, v);
//             }
//         }
//         else
//         {
//             if (mp.empty())
//             {
//                 cout << "empty" << '\n';
//             }
//             else
//             {
//                 cout << largestVal << '\n';
//                 mp.erase(largestVal);
//             }
//         }
//     }

//     return 0;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr;
    map<int, int> frequency;

    for (int i = 0; i < n; ++i)
    {
        int query;
        cin >> query;

        if (query == 1)
        {
            int element;
            cin >> element;
            arr.push_back(element);
            frequency[element]++;
        }
        else if (query == 2)
        {
            if (arr.empty())
            {
                cout << "empty\n";
            }
            else
            {
                int max_frequency = 0;
                int max_element = INT_MIN;

                for (auto &it : frequency)
                {
                    if (it.second > max_frequency || (it.second == max_frequency && it.first > max_element))
                    {
                        max_frequency = it.second;
                        max_element = it.first;
                    }
                }

                cout << max_element << "\n";

                // Remove all occurrences of max_element
                for (int i = 0; i < arr.size(); ++i)
                {
                    if (arr[i] == max_element)
                    {
                        arr.erase(arr.begin() + i);
                        --i;
                    }
                }

                frequency.erase(max_element);
            }
        }
    }

    return 0;
}