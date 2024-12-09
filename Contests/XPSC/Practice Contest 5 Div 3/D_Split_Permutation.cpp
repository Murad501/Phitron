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
        int x;
        cin >> x;
        ll sum = 0;
        for (int i = 1; i <= x; i++)
        {
            sum += i;
        }

        int y = 1;
        int current = 1;
        while (current < x)
        {

            if (sum % current == 0)
            {
                if (sum / current >= x)
                {
                    y = max(y, current);
                }
            }
            current++;
        }

        int needSum = sum / y;
        vector<int> ans;
        set<int> s;

        int count = 0;

        for (int i = x; i >= 1; i--)
        {
            if (count < y - 1)
            {
                int need = needSum - i;
                ans.push_back(i);
                if (need > 0)
                {

                    ans.push_back(need);
                    s.insert(need);
                }
                s.insert(i);
                count++;
            }
        }

        for (int i = 1; i <= x; i++)
        {
            if (s.find(i) == s.end())
            {
                ans.push_back(i);
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    return 0;
}