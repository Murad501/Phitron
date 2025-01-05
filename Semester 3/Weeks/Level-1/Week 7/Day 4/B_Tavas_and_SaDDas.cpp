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
    int n;
    cin >> n;

    map<string, int> luckyNumbers;
    string s = to_string(n);

    for (int i = 1; i <= s.size(); i++)
    {
        string temp1;
        for (int j = 0; j < i; j++)
        {
            temp1.push_back('0');
        }
        luckyNumbers[temp1] = luckyNumbers.size() + 1;

        for (int j = 1; j <= pow(2, i) - 1; j++)
        {
            string temp2;
            int maxBit = __lg(j);
            int need = i - (maxBit + 1);
            for (int k = 0; k < need; k++)
            {
                temp2.push_back('0');
            }
            for (int k = maxBit; k >= 0; k--)
            {
                if (((j >> k) & 1) == 1)
                {
                    temp2.push_back('1');
                }
                else
                {
                    temp2.push_back('0');
                }
            }
            luckyNumbers[temp2] = luckyNumbers.size() + 1;
        }
    }

    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
        {
            temp.push_back('0');
        }
        else
        {
            temp.push_back('1');
        }
    }

    cout << luckyNumbers[temp] << nl;
    return 0;
}