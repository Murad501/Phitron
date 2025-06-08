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
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }

        bool flag = true;
        if (n > 2)
        {
            int i = 0, j = 1;
            while (j < n)
            {
                int dif = abs(p[i] - p[j]);
                if (dif == 1 && p[i] > p[j])
                {
                    swap(p[i], p[j]);
                }
                i++;
                j++;
            }
        }

        int l = 0, r = 1;
        while (r < n)
        {

            if (p[l] > p[r])
            {
                flag = false;
                break;
            }
            l++;
            r++;
        }

        if (flag)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }

    return 0;
}