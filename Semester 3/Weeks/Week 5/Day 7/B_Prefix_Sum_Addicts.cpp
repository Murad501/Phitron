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
        vector<int> v;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        deque<int> ans;
        for (int i = k - 1; i >= 1; i--)
        {
            ans.push_front(v[i] - v[i - 1]);
        }

        bool flag = true;

        for (int i = 0; i < k - 1; i++)
        {
            if (ans[i] > ans[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "No" << nl;
        }
        else
        {
            int currentMin = ans[0];
            int target = v[0];
            int remaining = n - k + 1;
            int availableMin = target / remaining;
            cout << "current-" << currentMin << " target-" << target << " steps-" << remaining << endl;
            if (target % remaining != 0)
            {
                availableMin++;
            }

            if (availableMin <= currentMin)
            {
                cout << "Yes" << nl;
            }
            else
            {
                cout << "No" << nl;
            }
        }
    }
    return 0;
}