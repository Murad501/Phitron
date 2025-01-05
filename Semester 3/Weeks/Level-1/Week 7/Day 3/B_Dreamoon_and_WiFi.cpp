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
    string s1, s2;
    cin >> s1 >> s2;
    int s1Pos = 0, s2Pos = 0, unrecognized = 0;
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '+')
        {
            s1Pos++;
        }
        else
        {
            s1Pos--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s2[i] == '+')
        {
            s2Pos++;
        }
        else if (s2[i] == '-')
        {
            s2Pos--;
        }
        else
        {
            unrecognized++;
        }
    }

    int ans = 0, wrongTimes = 0;

    ll len = pow(2, unrecognized) - 1;
    s2Pos -= unrecognized;
    if (s2Pos == s1Pos)
    {

        ans++;
    }
    else
    {
        wrongTimes++;
    }

    for (int i = 1; i <= len; i++)
    {
        int maxBit = __lg(i);
        int count = 0;
        for (int j = maxBit; j >= 0; j--)
        {
            if (((i >> j) & 1) == 1)
            {
                count += 2;
            }
        }
        if (count + s2Pos == s1Pos)
        {
            ans++;
        }
        else
        {
            wrongTimes++;
        }
   
    }

    int total = ans + wrongTimes;
    double percentage = ((double)ans / total);
    cout << fixed << setprecision(12) << percentage << nl;

    return 0;
}