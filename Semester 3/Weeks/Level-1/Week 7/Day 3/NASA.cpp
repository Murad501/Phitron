#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
const int maxN = (1LL << 15);

vector<int> allPalindrome;

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}
int main()
{
    MuRAD_BOOST();
    markPalindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), count(maxN + 1);
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            count[v[i]]++;
        }

        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allPalindrome.size(); j++)
            {
                int curr = (v[i] ^ allPalindrome[j]);
          
                ans += count[curr];
            }
        }
        cout<<ans/2<<nl;
    }
    return 0;
}