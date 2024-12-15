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
        int n;
        cin >> n;
        vector<int> a;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if (x == 0)
            {
                zero++;
            }
        }

        int count = 0;

        if (zero > 1)
        {
            count = -1;
        }
        else
        {
            for (int i = n - 2; i >= 0; i--)
            {
                int curr = a[i];
                int next = a[i + 1];
                while (next <= curr)
                {
                    curr = curr / 2;
                    count++;
                    if (curr == 0)
                    {
                        zero++;
                        break;
                    }
                }
                if (zero > 1)
                {
                    count = -1;
                    break;
                }
                a[i] = curr;
            }
        }
        cout << count << nl;
    }
    return 0;
}