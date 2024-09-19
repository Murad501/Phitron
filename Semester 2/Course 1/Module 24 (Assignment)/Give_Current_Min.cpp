#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<>> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        pq.push(v);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (k == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}