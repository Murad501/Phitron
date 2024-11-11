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
        string a, b;
        cin >> a >> b;
        int szOfA = a.size();
        int szOfB = b.size();
        if (a[szOfA - 1] == b[szOfB - 1] && szOfA == szOfB)
        {
            cout << "=" << nl;
        }
        else if (a[szOfA - 1] == 'S' && b[szOfB - 1] == 'S')
        {
            if (szOfA > szOfB)
            {
                cout << "<" << nl;
            }
            else
            {
                cout << ">" << nl;
            }
        }
        else if (a[szOfA - 1] == 'S' || b[szOfB - 1] == 'S')
        {
            if (a[szOfA - 1] == 'S')
            {
                cout << "<" << nl;
            }
            else
            {
                cout << ">" << nl;
            }
        }
        else if (a[szOfA - 1] == b[szOfB - 1])
        {
            if (szOfA > szOfB)
            {
                cout << ">" << nl;
            }
            else
            {
                cout << "<" << nl;
            }
        }
        else if (a[szOfA - 1] == 'M' || b[szOfB - 1] == 'M')
        {
            if (a[szOfA - 1] == 'M')
            {
                cout << "<" << nl;
            }
            else
            {
                cout << ">" << nl;
            }
        }
    }

    return 0;
}