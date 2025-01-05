#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int sz = 0;
    map<int, int> serialsBy;
    map<int, set<int>, greater<int>> spendsBy;
    for (int i = 1; i <= q; i++)
    {
        int m;
        cin >> m;
        if (m == 1)
        {
            int c;
            cin >> c;
            sz++;
            serialsBy[sz] = c;
            spendsBy[c].insert(sz);
        }
        else if (m == 2)
        {
            auto firstSerial = serialsBy.begin();
            auto spendMost = spendsBy.find(firstSerial->second);
            cout << firstSerial->first << " ";

            if (spendMost->second.size() == 1)
            {

                spendsBy.erase(spendMost);
            }
            else
            {
                spendMost->second.erase(firstSerial->first);
            }
            serialsBy.erase(firstSerial);
        }
        else
        {
            auto spendMost = spendsBy.begin();
            auto findFromSerial = serialsBy.find(*spendMost->second.begin());
            cout << findFromSerial->first << " ";

            if (spendMost->second.size() == 1)
            {

                spendsBy.erase(spendMost);
            }
            else
            {
                spendMost->second.erase(findFromSerial->first);
            }
            serialsBy.erase(findFromSerial);
        }
    }

    return 0;
}