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
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> v;
        ll sum = 0;
        int maxV = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
            maxV = max(maxV, x);
        }

        sum -= maxV;
        int ved = k + maxV;
        int varun = sum + p;
        if (varun > ved)
        {
            cout << "Varun" << nl;
        }
        else if (varun < ved)
        {
            cout << "Ved" << nl;
        }
        else
        {
            cout << "Equal" << nl;
        }
    }

    return 0;
}