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
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        deque<char> a, b;

        int r1 = n - 1;
        int r2 = m - 1;
        while (r2 >= 0 && r1 >= 0)
        {
            if (s[r1] != s[r2])
            {
                if (s[r1] == 'a')
                {
                    a.push_front('b');
                    a.push_front('a');
                    b.push_front('b');
                }
                else
                {
                    b.push_front('b');
                    b.push_front('a');
                    a.push_front('b');
                }
            }
            else
            {
                a.push_front(s[r1]);
                b.push_front(t[r2]);
            }
            r1--;
            r2--;
        }
        string f1, f2;
        
        for (int i = 0; i < a.size(); i++)
        {

            f1[i] = a[i];
        }
        for (int i = 0; i < b.size(); i++)
        {

            f2[i] = t[i];
        }

        if (s == f2 || t == f1)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }

    return 0;
}