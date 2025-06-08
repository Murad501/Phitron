#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

long long fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

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
        int n, d;
        cin >> n >> d;
        vector<int> ans;
        if (n < 9)
        {
            for (int i = 1; i <= 9; i += 2)
            {
                if (i == 5)
                {
                    if (d == 5)
                    {
                        ans.push_back(5);
                    }
                }
                else if ((fact(n) * d) % i == 0)
                {
                    ans.push_back(i);
                }
            }
        }
        else
        {
            for (int i = 1; i <= 9; i += 2)
            {
                if (i == 5)
                {
                    if (d == 5)
                    {
                        ans.push_back(5);
                    }
                }
                else
                {
                    ans.push_back(i);
                }
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