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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string t;
        cin >> t;

        string s;
        int r = n - 1;
        while (r >= 0)
        {
            if (t[r] == '0')
            {
                r--;
                string y;
                y.push_back(t[r - 1]);
                y.push_back(t[r]);
                int num = stoi(y);
                char c = num + 'a' - 1;
                s.push_back(c);
                r -= 2;
            }
            else
            {

                char c = t[r] + ('a' - '1');
                s.push_back(c);
                r--;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i];
        }
        cout << nl;
    }
    return 0;
}