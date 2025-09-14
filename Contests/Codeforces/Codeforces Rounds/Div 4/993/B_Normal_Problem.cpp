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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());

        string t;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'p')
            {
                t.push_back('q');
            }
            else if (s[i] == 'q')
            {
                t.push_back('p');
            }
            else
            {
                t.push_back(s[i]);
            }
        }
        cout << t << nl;
    }
    return 0;
}