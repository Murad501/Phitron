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
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            cout << a[l] << " ";
            l++;
        }
        else
        {
            cout << b[r] << " ";
            r++;
        }
        
        if (l ==  n || r == m)
        {
          
     
            while (l < n)
            {
                cout << a[l] << " ";
                l++;
            }
            while (r < m)
            {
                cout << b[r] << " ";
                r++;
            }
        }
    }

    return 0;
}