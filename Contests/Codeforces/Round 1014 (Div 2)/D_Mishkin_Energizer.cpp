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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int L = 0, I = 0, T = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            L++;
        else if (s[i] == 'I')
            I++;
        else
            T++;
    }

    if (L == T && T == I)
    {
        zero;
    }
    else if (L == n || L == n || T == n)
    {
        minus;
    }
    else
    {
        vector<int> ans;
        bool ok = false;
        for (int i = 0; i <= (2 * n); i++)
        {

            string tempS;
            if (I < T || I < L)
            {

                bool found = false;
                for (int j = 0; j < s.size(); j++)
                {
                    tempS.push_back(s[j]);
                    if (j == s.size() - 1)
                    {
                        continue;
                    }
                    if (s[j] != s[j + 1] && s[j] != 'I' && s[j + 1] != 'I' && !found)
                    {
                        tempS.push_back('I');
                        ans.push_back(j + 1);
                        I++;
                        found = true;
                        ok = true;
                    }
                }
            }
            else if (L < T || L < I)
            {

                bool found = false;
                for (int j = 0; j < s.size(); j++)
                {
                    tempS.push_back(s[j]);
                    if (j == s.size() - 1)
                    {
                        continue;
                    }
                    if (s[j] != s[j + 1] && s[j] != 'L' && s[j + 1] != 'L' && !found)
                    {
                        tempS.push_back('L');
                        ans.push_back(j + 1);
                        L++;
                        found = true;
                        ok = true;
                    }
                }
            }
            else if (T < L || T < I)
            {

                bool found = false;
                for (int j = 0; j < s.size(); j++)
                {
                    tempS.push_back(s[j]);
                    if (j == s.size() - 1)
                    {
                        continue;
                    }
                    if (s[j] != s[j + 1] && s[j] != 'T' && s[j + 1] != 'T' && !found)
                    {
                        tempS.push_back('T');
                        ans.push_back(j + 1);
                        T++;
                        found = true;
                        ok = true;
                    }
                }
            }

            // cout<<L<<" "<<I<<" "<<T<<nl;
            if (L == T && T == I)
            {
                break;
            }

            if (!ok)
            {
                if (I == T || I == L)
                {

                    bool found = false;
                    for (int j = 0; j < s.size(); j++)
                    {
                        tempS.push_back(s[j]);
                        if (j == s.size() - 1)
                        {
                            continue;
                        }
                        if (s[j] != s[j + 1] && s[j] != 'I' && s[j + 1] != 'I' && !found)
                        {
                            tempS.push_back('I');
                            ans.push_back(j + 1);
                            I++;
                            found = true;
                            ok = true;
                        }
                    }
                }
                else if (L == T || L == I)
                {

                    bool found = false;
                    for (int j = 0; j < s.size(); j++)
                    {
                        tempS.push_back(s[j]);
                        if (j == s.size() - 1)
                        {
                            continue;
                        }
                        if (s[j] != s[j + 1] && s[j] != 'L' && s[j + 1] != 'L' && !found)
                        {
                            tempS.push_back('L');
                            ans.push_back(j + 1);
                            L++;
                            found = true;
                            ok = true;
                        }
                    }
                }
                else if (T == L || T == I)
                {

                    bool found = false;
                    for (int j = 0; j < s.size(); j++)
                    {
                        tempS.push_back(s[j]);
                        if (j == s.size() - 1)
                        {
                            continue;
                        }
                        if (s[j] != s[j + 1] && s[j] != 'T' && s[j + 1] != 'T' && !found)
                        {
                            tempS.push_back('T');
                            ans.push_back(j + 1);
                            T++;
                            found = true;
                            ok = true;
                        }
                    }
                }
            }

            s = tempS;
        }

        cout << ans.size() << nl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << nl;
        }
    }
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