#include <bits/stdc++.h>
using namespace std;

bool cmp(const int a, const int b)
{
    return a < b;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int v;
            cin >> v;
            pq.push(v);
        }
        else
        {
            if (pq.empty())
            {
                cout << "empty" << '\n';
            }
            else
            {
                int topVal = pq.top();
                cout << topVal << '\n';

                while (!pq.empty() && topVal == pq.top())
                {
                    pq.pop();
                }
            }
        }
    }

    return 0;
}