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
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << -1 << nl;
        }
        else
        {
            queue<int> restItems;
            queue<int> rest;
            vector<int> ans;

            for (int i = n; i >= 1; i--)
            {

                int idx = ans.size() + 1;
                if (i % k == idx && (i % k) % k == idx)
                {
                    restItems.push(i);
                }
                else
                {
                    ans.push_back(i);
                }
            }
            while (true)
            {
                while (!restItems.empty())
                {
                    int idx = ans.size() + 1;
                    int val = restItems.front();
                    if (val % k == idx && (val % k) % k == idx)
                    {
                        rest.push(val);
                        restItems.pop();
                    }
                    else
                    {
                        ans.push_back(val);
                        restItems.pop();
                    }
                }

                while (!rest.empty())
                {
                    int idx = ans.size() + 1;
                    int val = rest.front();
                    if (val % k == idx && (val % k) % k == idx)
                    {
                        restItems.push(val);
                        rest.pop();
                    }
                    else
                    {
                        ans.push_back(val);
                        rest.pop();
                    }
                }

                if (restItems.empty() && rest.empty())
                {
                    break;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}