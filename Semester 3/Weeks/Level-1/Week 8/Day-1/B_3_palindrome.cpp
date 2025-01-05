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
    string s;
    if (n < 3)
    {
        for (int i = 0; i < n; i++)
        {
            s.push_back('a');
        }
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                s.push_back('a');
                s.push_back('a');
            }
            else
            {
                s.push_back('b');
                s.push_back('b');
            }
        }
        if (n % 2 == 1)
        {
            char c = s[s.size() - 1];
            if (c == 'a')
            {

                s.push_back('b');
            }
            else
            {
                s.push_back('a');
            }
        }
    }
    cout << s << nl;
    return 0;
}