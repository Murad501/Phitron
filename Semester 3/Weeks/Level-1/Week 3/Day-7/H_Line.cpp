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
            while (v[l] > (n / 2))
            {
                l++;
            }
            while (v[r] > (n / 2))
            {
                r--;
            }

            if (v[l] <= v[r] && l < (n / 2))
            {

                sum -= v[l];
                v[l] = n - 1 - l;
                sum += v[l];
                l++;
            }
            else if (v[l] >= v[r] && r >= (n / 2))
            {

                sum -= v[r];
                v[r] = r;
                sum += r;
                r--;
            }

            cout << sum << " ";
        }

        cout << nl;
    }
    return 0;
}