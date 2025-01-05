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
        vector<int> cyphers;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cyphers.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            string moves;
            cin>>moves;
            for (char c : moves)
            {
                if (c == 'U')
                {
                    if (cyphers[i] == 0)
                    {
                        cyphers[i] = 9;
                    }
                    else
                    {
                        cyphers[i]--;
                    }
                }
                else
                {
                    if (cyphers[i] == 9)
                    {
                        cyphers[i] = 0;
                    }
                    else
                    {
                        cyphers[i]++;
                    }
                }
            }

        }

        for (int i = 0; i < n; i++)
        {
            cout << cyphers[i] << " ";
        }
        cout << nl;
    }
    return 0;
}