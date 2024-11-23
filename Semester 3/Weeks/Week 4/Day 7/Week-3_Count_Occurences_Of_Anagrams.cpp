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
        string txt, pat;
        cin >> txt >> pat;
        int n = txt.size();
        int sz = pat.size();
        int l = 0, r = 0, ans = 0;

        map<char, int> mp, pt;
        for (char c : pat)
        {
            pt[c]++;
        }
        while (r < n)
        {
            mp[txt[r]]++;
            if (sz == r - l + 1)
            {
                if (pt.size() == mp.size())
                {
                    auto m = mp.begin();
                    auto p = pt.begin();
                    while (true)
                    {
                        if (m->first != p->first || m->second != p->second)
                        {
                            break;
                        }
                        m++;
                        p++;
                        if (m == mp.end() && p == pt.end())
                        {

                            ans++;
                            break;
                        }
                    }
                }
                mp[txt[l]]--;
                if (mp[txt[l]] < 1)
                {
                    mp.erase(txt[l]);
                }
                l++;
            }
            r++;
        }
        cout << ans << nl;
    }

    return 0;
}