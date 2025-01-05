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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }
        int mex = 0;
        for (int val : s)
        {
            if (val == mex)
            {
                mex++;
                continue;
            }
            break;
        }

        v.push_back(mex);

        k = k % (n + 1);

        int count = 0;
        int start = n - k + 1, end = n - k;
        for (int i = start; i <= n; i++)
        {
            cout << v[i] << " ";
        }

        for (int i = 0; i < end; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    return 0;
}