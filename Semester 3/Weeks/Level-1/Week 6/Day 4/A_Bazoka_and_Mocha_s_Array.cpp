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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                count++;
            }
        }

        if (count <= 1)
        {
            if (count == 0)
            {
                cout << "Yes" << nl;
            }
            else
            {
                if (v[n-1] <= v[0])
                {
                    cout << "Yes" << nl;
                }
                else
                {
                    cout << "No" << nl;
                }
            }
        }
        else
        {
            cout << "No" << nl;
        }
    }
    return 0;
}