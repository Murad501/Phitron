#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> s;
    queue<int> q;
    bool same = true;
    if (n != m)
    {
        same = false;
    }
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n == m && same)
    {

        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                same = false;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }
    }

    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}