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
        string s;
        vector<int> v;

        cin >> s;

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                v.push_back(i);
            }
            else
            {
                sum += n - i - 1;
                v.push_back(n - i - 1);
            }
        }
        int l = 0, r = n - 1;

        for (int i = 0; i < n; i++)
        {
            while (v[l] > n / 2)
            {
                l++;
            }
            while (v[r] > n / 2)
            {
                r--;
            }
            // cout<<l<<" "<<r<<nl;

            if (v[l] <= v[r] && v[l] < n / 2)
            {
                sum -= v[l];
                sum += n - 1 - l;
                l++;
            }
            else if (v[r] < n / 2)
            {
                sum -= v[l];
                sum += r;
                r--;
            }

            cout << sum << " ";
            
        }
        cout << nl;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
    }
    return 0;
}