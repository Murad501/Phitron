#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n < 5)
        {
            cout << -1 << nl;
        }
        else
        {
            deque<int> dq;
            vector<int> even;
            queue<int> q;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    dq.push_back(i);
                }
                else
                {
                    even.push_back(i);
                }
            }
            int sz = even.size();
            bool flag = false;

            for (int i = 0; i < sz; i++)
            {
                if (flag)
                {
                    dq.push_back(even[i]);
                }
                else
                {
                    int dT = dq[dq.size() - 1];
                    int val = dT + even[i];
                    bool isP = isPrime(val);

                    if (isP)
                    {
                        q.push(even[i]);
                    }
                    else
                    {
                        dq.push_back(even[i]);
                        flag = true;
                    }
                }
            }

            while (!q.empty())
            {
                int x = q.front();
                q.pop();
                dq.push_back(x);
            }

            for (int i = 0; i < n; i++)
            {
                cout << dq[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}