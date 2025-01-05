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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool flag = false;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
            {
                sum += v[k];
            }
            else
            {
                sum -= v[k];
            }
        }
        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    
    if (flag)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}