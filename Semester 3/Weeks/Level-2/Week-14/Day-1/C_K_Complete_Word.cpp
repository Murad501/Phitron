#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<string> words;

    int wordcnt = n / k;
    for (int i = 0; i < wordcnt; i++)
    {
        string word;
        for (int j = 0; j < k; j++)
        {
            word.push_back(s[((i * k) + j)]);
        }
        words.push_back(word);
    }
    int l = k / 2, r = k / 2;
    if (k % 2 == 0)
    {
        l--;
    }

    int ans = n;
    while (l >= 0 && r <= k)
    {
        map<char, int> mp;
        if (l == r)
        {
            for (int i = 0; i < wordcnt; i++)
            {
                string word = words[i];
                mp[word[l]]++;
            }
        }
        else
        {
            for (int i = 0; i < wordcnt; i++)
            {
                string word = words[i];
                mp[word[l]]++;
                mp[word[r]]++;
            }
        }
        int maxval = 0;
        for (auto [key, value] : mp)
        {
            maxval = max(maxval, value);
        }
        ans -= maxval;
        l--;
        r++;
    }

    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}