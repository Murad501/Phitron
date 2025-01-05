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
        vector<int> rating;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            rating.push_back(x);
        }
        string s;
        cin >> s;
        map<int, int> disliked;
        map<int, int> liked;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (s[i] == '0')
            {
                disliked[rating[i]] = i;
            }
            else
            {
                liked[rating[i]] = i;
            }
        }
        map<int, int> ans;
        int start = 1;
        for (auto [key, value] : disliked)
        {
            ans[value] = start;
            start++;
        }
        for (auto [key, value] : liked)
        {
            ans[value] = start;
            start++;
        }

        for (auto [key, value] : ans)
        {
            cout << value << " ";
        }
        cout << nl;
    }
    return 0;
}