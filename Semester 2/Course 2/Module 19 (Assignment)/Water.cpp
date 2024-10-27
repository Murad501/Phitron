#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second < b.second;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            pq.push({i, h});
        }

        int firstIdx, secondIdx;

        for (int i = 0; i < 2; i++)
        {
            pair<int, int> pr = pq.top();
            pq.pop();
            if (i == 0)
            {
                firstIdx = pr.first;
            }
            else
            {
                secondIdx = pr.first;
                if (secondIdx < firstIdx)
                {
                    swap(firstIdx, secondIdx);
                }
            }
        }
        cout << firstIdx << " " << secondIdx;

        cout << endl;

    }
    return 0;
}