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
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        set<int> available;
        ll val = 0;
        int start = 0;
        while (true)
        {
            val = pow(k, start);
            start++;
            if (val <= r2)
            {
                available.insert(val);
            }
            else if (val > r2)
            {
                break;
            }
        }

        set<string> ans;
        for (int i = l1; i <= r1; i++)
        {
            for (int j = l2; j <= r2; j++)
            {
                int val = j / i;

                if (j % i != 0)
                {
                    continue;
                }
                auto it = available.find(val);
                if (it != available.end())
                {
                    string a = to_string(i);
                    string b = to_string(j);
                    string temp1 = a;
                    string temp2 = b;
                    string a1 = temp1.append(b);
                    string b1 = temp2.append(a);
                    auto it = ans.find(a1);
                    auto it2 = ans.find(b1);
                    if (it2 == ans.end() && it2 == ans.end())
                    {
                        ans.insert(a1);
                    }
                }
            }
        }

        cout << ans.size() << nl;
    }
    return 0;
}