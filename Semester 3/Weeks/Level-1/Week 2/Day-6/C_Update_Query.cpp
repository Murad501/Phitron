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
        set<int> index;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            index.insert(x);
        }
        string c;
        cin >> c;
        vector<char> characters;
        for (char ch : c)
        {
            characters.push_back(ch);
        }
        sort(characters.begin(), characters.end());

        int idx = 0;
        for (int v : index)
        {
            s[v - 1] = characters[idx];
            idx++;
        }
        cout << s << nl;
    }

    return 0;
}