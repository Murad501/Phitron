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
        string s;
        cin >> s;
        vector<int> indices;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            indices.push_back(x);
        }
        string c;
        cin >> c;

        for (int i = 0; i < m; i++)
        {
            int ind = indices[i] - 1;
            s[ind] = c[i];
        }
        cout << s << nl;
    }
  
    return 0;
}